#include <iostream>
#include <string>
#include "pugixml.hpp"

using namespace std;
using namespace pugi;

// A class to represent a record in the phonebook
class Record {
    public:
    string firstName;
    string lastName;
    string telephoneNumber;
    string emailAddress;

    // Constructor to initialize the record with default values
    Record(): firstName(""), lastName(""), telephoneNumber(""), emailAddress("") {}

    // Constructor to initialize the record with provided values
    Record(string fName, string lName, string tNumber, string eAddress)
        : firstName(fName), lastName(lName), telephoneNumber(tNumber), emailAddress(eAddress) {}

    // Function to convert the record to an XML node
    xml_node toXMLNode() const {
        xml_document doc;
        xml_node recordNode = doc.append_child("record");

        recordNode.append_child("firstName").text().set(this->firstName.c_str());
        recordNode.append_child("lastName").text().set(this->lastName.c_str());
        recordNode.append_child("telephoneNumber").text().set(this->telephoneNumber.c_str());
        recordNode.append_child("emailAddress").text().set(this->emailAddress.c_str());

        return recordNode;
    }

    // Function to create a record from an XML node
    static Record fromXMLNode(const xml_node &recordNode) {
        Record record;

        record.firstName = recordNode.child("firstName").text().as_string();
        record.lastName = recordNode.child("lastName").text().as_string();
        record.telephoneNumber = recordNode.child("telephoneNumber").text().as_string();
        record.emailAddress = recordNode.child("emailAddress").text().as_string();

        return record;
    }
};

// A class to represent the phonebook
class Phonebook {
    public:
    xml_document doc;
    xml_node root;

    // Constructor to initialize the phonebook with an empty XML document
    Phonebook() {
        root = doc.append_child("phonebook");
    }

    // Function to add a record to the phonebook
    void addRecord(const Record &record) {
        root.append_copy(record.toXMLNode());
    }

    // Function to update a record in the phonebook
    void updateRecord(const Record &record, int index) {
        xml_node recordNode = root.child("record");
        for (int i = 0; i < index; i++) {
            recordNode = recordNode.next_sibling("record");
        }
        recordNode.set_value(record.toXMLNode().child_value());
    }

    // Function to delete a record from the phonebook
    void deleteRecord(int index) {
        xml_node recordNode = root.child("record");
        for (int i = 0; i < index; i++) {
            recordNode = recordNode.next_sibling("record");
        }
        root.remove_child(recordNode);
    }

    // Function to display all records in the phonebook
    void displayRecords() const {
        for (xml_node recordNode : root.children("record")) {
            Record record = Record::fromXMLNode(recordNode);
            cout << "First Name: " << record.firstName << endl;
            cout << "Last Name: " << record.lastName << endl;
            cout << "Telephone Number: " << record.telephoneNumber << endl;
            cout << "Email Address: " << record.emailAddress << endl << endl;
        }
    }

    // Function to search for a record in the phonebook
    void search(const string &query) const {
        for (xml_node recordNode : root.children("record")) {
            Record record = Record::fromXMLNode(recordNode);
            if (record.firstName.find(query) != string::npos ||
                record.lastName.find(query
                ) != string::npos ||
            record.telephoneNumber.find(query) != string::npos ||
            record.emailAddress.find(query) != string::npos) {
                cout << "First Name: " << record.firstName << endl;
                cout << "Last Name: " << record.lastName << endl;
                cout << "Telephone Number: " << record.telephoneNumber << endl;
                cout << "Email Address: " << record.emailAddress << endl << endl;
            }
        }
    }
};

// Main function to test the phonebook application
int main() {
    Phonebook phonebook;
    phonebook.addRecord(Record("John", "Doe", "123-456-7890", "johndoe@example.com"));
    phonebook.addRecord(Record("Jane", "Doe", "987-654-3210", "janedoe@example.com"));
    phonebook.addRecord(Record("Bob", "Smith", "555-555-1212", "bobsmith@example.com"));

    cout << "Initial Records:" << endl;
    phonebook.displayRecords();

    cout << "Deleting record at index 1..." << endl;
    phonebook.deleteRecord(1);

    cout << "Records after deletion:" << endl;
    phonebook.displayRecords();

    cout << "Updating record at index 1..." << endl;
    phonebook.updateRecord(Record("Sue", "Johnson", "555-123-4567", "suejohnson@example.com"), 1);

    cout << "Records after update:" << endl;
    phonebook.displayRecords();

    cout << "Searching for records with last name 'Doe':" << endl;
    phonebook.search("Doe");

    return 0;
}
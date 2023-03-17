// xml3.cpp 
// display the contents of the students.xml file
#include <iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main() {
    // Load the XML file
    XMLDocument doc;
    if (doc.LoadFile("students.xml") != XML_SUCCESS) {
        cerr << "Error loading XML file" << endl;
        return 1;
    }
    
    // Get the root node of the XML document
    XMLNode* root = doc.FirstChildElement("students");
    if (root == nullptr) {
        cerr << "Error: Missing root element" << endl;
        return 1;
    }
    
    // Get the student elements and display their contents
    XMLElement* element = root->FirstChildElement("student");
    while (element != nullptr) {
        const char* name = element->FirstChildElement("name")->GetText();
        const char* id = element->FirstChildElement("id")->GetText();
        
        cout << "Name: " << name << ", ID: " << id << endl;
        
        element = element->NextSiblingElement("student");
    }
    
    return 0;
}

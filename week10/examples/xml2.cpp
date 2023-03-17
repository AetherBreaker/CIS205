#include <iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;
string Sname;
string Sid;

int main() {
  // Create the XML document
  XMLDocument doc;
  XMLDeclaration* decl = doc.NewDeclaration();
  doc.InsertFirstChild(decl);

  // Create the root element
  XMLElement* root = doc.NewElement("students");
  doc.InsertEndChild(root);

  // Create the student elements with name and id fields
  for (int i = 1; i <= 3; i++) {
    cout << "Name: ";
    cin >> Sname;
    cout << "ID: ";
    cin >> Sid;
    XMLElement* student = doc.NewElement("student");
    root->InsertEndChild(student);

    XMLElement* name = doc.NewElement("name");
    name->SetText(Sname.c_str());
    student->InsertEndChild(name);

    XMLElement* id = doc.NewElement("id");
    id->SetText(Sid.c_str());
    student->InsertEndChild(id);
  }

  // Save the XML document to file
  if (doc.SaveFile("students.xml") != XML_SUCCESS) {
    cerr << "Error saving XML file" << endl;
    return 1;
  }

  // Display the contents of the XML document
  XMLPrinter printer;
  doc.Print(&printer);
  cout << printer.CStr() << endl;

  return 0;
}

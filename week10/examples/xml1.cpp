// sample program to generate an input string to and xml file. 

#include <iostream>
#include <string>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main() {
	// Read input from the console
	cout << "Enter some text: ";
	string input;
	getline(cin, input);

	// Create an XML document
	XMLDocument doc;
	XMLNode* root = doc.NewElement("root");
	doc.InsertFirstChild(root);

	// Add the input as a child node to the root node
	XMLElement* element = doc.NewElement("input");
	element->SetText(input.c_str());
	root->InsertEndChild(element);

	// Save the document to an XML file
	doc.SaveFile("output.xml");

	cout << "Input saved to output.xml" << endl;

	return 0;
}

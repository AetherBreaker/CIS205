// regex7.cpp
// simple example of reading in a record from an xml file.
// (note - just the first record - you can write the rest to read the whole file.     

#include <iostream>
#include <fstream>
#include <regex>
#include <string>

using namespace std;

int main() {
  // Read in the XML file
  ifstream input("students.xml");                     // sample xml file from last class
  
  string xml((istreambuf_iterator<char>(input)), istreambuf_iterator<char>());

  // Define regex patterns to match the data we want to extract
  regex student("<name>(.+)</name>");
  regex id("<id>(.+)</id>");
  
  // Extract the data from the XML
  smatch name_match;
  smatch id_match;
  
  if (regex_search(xml, name_match, student)) 
  {
    cout << "Student: " << name_match[1].str() << endl;
  }
  if (regex_search(xml, id_match, id)) 
  {
    cout << "ID: " << id_match[1].str() << endl;
  }

  return 0;
}

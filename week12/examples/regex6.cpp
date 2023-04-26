// regex6.cpp  
// example of using the regex_match function

#include <iostream>
#include <regex>
#include <string>

using namespace std;

string input;

int main() 
{
  cout << "Test to see if input matches '12345' " << endl;
  
  cout << "Enter a series of numbers: ";
  cin >> input; 

  regex condition("12345");

  if (regex_match(input, condition)) 
    cout << "Input matches!" << endl;
  else 
    cout << "Input does not match." << endl;
  return 0;
}

// regex4.cpp
// check to see if a date is prior to 1/1/2020
#include <iostream>
#include <regex>
#include <string>

using namespace std;
string input;

int main() 
{
  regex condition("(0[1-9]|1[0-2])/([0-2][0-9]|3[0-1])/((19|20)[0-9]{2})");
  
  cout << "Enter a date (in MM/DD/YYYY format): ";
  cin >> input;\

  if (std::regex_match(input, condition)) 
    cout << "Valid date!" << endl;
  else 
    cout << "Invalid date." << endl;

  return 0;
}

// regex3.cpp
// matches all strings that begin with 'A' and end with 'E'

#include <iostream>
#include <regex>

using namespace std;

int main() {
    regex condition("^A.*E$");
    
    string input;

    cout << "Enter a string to match: ";
    cin >> input;
    
    if (std::regex_match(input, condition)) 
        cout << "Match found!" << endl;
    else 
        cout << "No match found." << endl;

    return 0;
}

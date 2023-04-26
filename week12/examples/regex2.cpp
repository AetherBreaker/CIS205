// regex2.cpp
// determine if a number is less than 1971.
#include <iostream>
#include <regex>

using namespace std;

int main() {
    string input;
    regex rObj("^(19[0-6][0-9]|1970)$");

    cout << "Enter a string to match: ";
    cin >> input;
    
    if (regex_match(input, rObj)) 
        cout << "Match found!" << endl;
    else
        cout << "No match found." << endl;
    
    return 0;
}

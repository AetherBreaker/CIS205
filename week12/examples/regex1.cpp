// regex1.cpp
// match all strings that begin with a '4'

#include <iostream>
#include <regex>

using namespace std;

int main() {
    string input;
    regex rObj("^4[0-9]*$");

    cout << "Enter a string to match: ";
    cin >> input;
    
    if (regex_match(input, rObj)) 
            cout << "Match found!" << endl;
    else
            cout << "No match found." << endl;
        
    return 0;
}

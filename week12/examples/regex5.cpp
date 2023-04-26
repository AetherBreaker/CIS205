// regex4.cpp
// test to see if a string begins with '4'
// then change the 4 to a 5. 

#include <iostream>
#include <regex>
#include <string>


using namespace std;

string input;


int main() {
    cout << "enter a number: ";
    cin >> input;
    
    std::regex condition("^4([0-9]*)");
    
    // Replace all instances of numbers starting with 4 with a 5
    
    string output = regex_replace(input, condition, "5$1");
    
    cout << "Input number: " << input << endl;
    cout << "Output number: " << output << endl;
    
    return 0;
}

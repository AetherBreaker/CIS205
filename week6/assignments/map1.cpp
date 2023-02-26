// Jacob Ogden
// 2/22/2023

// Write a program that prompts the user for a list of numbers
// and then prints the number of each number occurs in the list
// using an std::map to keep track of the frequency.


#include <iostream>
#include <map>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::istringstream;

int main() {
    cout << "Enter a list of numbers separated by spaces: ";
    string input;

    // Using getline to grab the entire line of input instead of stopping at the first space
    getline(cin, input);

    // Using istringstream to automatically handle separating the numbers by spaces
    istringstream iss(input);
    map<int, int> numbers;
    int number;

    // Loop through the input and add each number to the map
    // text from the input stream is automatically converted to an int by the >> operator
    // istringstream >> operator automatically handles casting to arithmatic types
    while (iss >> number) {
        numbers[number]++;
    }

    // Loop through the map and print the number and the number of times it occurs
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        // it->first is the key, it->second is the value
        cout << it->first << " occurs " << it->second << " times" << endl;
    }

    return 0;
}
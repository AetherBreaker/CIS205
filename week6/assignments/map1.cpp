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
    getline(cin, input);
    istringstream iss(input);
    map<int, int> numbers;
    int number;
    while (iss >> number) {
        numbers[number]++;
    }

    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        cout << it->first << " occurs " << it->second << " times" << endl;
    }

    return 0;
}
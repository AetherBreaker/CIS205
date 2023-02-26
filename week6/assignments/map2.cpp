// Jacob Ogden
// 2/23/2023

// Write another version of the above program that inputs integers from the user,
// one at a time, until the user enters a letter. Use a map<int, int> to store the
// integer and the number of times it was entered.
// So, each time an integer is entered, you have to check to see if it already exists
// in the map container.
// If it does not, add it to the map and set the frequency to 1. If it does,
// increment the frequency number by one. When completed, use an iterator to display
// the contents of the map (the integer and its frequency).

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
using std::setw;


int main() {
    cout << "Please enter a number, enter a letter or other non-numerical character when finished: ";
    string input;
    map<int, int> numbers;
    int number;

    // Loop through the input and add each number to the map if it doesn't already exist
    // text from the input stream is automatically converted to an int by the >> operator
    while (cin >> number) {
        numbers[number]++;
        cout << "Please enter a number, enter a letter or other non-numerical character when finished: ";
    }

    // determine the maximum number of digits in the largest number
    // for the purpose of padding the output text to look nice
    int max_num_digits = 0;
    int max_freq_digits = 0;
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        int number_digits = 0;
        int freq_digits = 0;
        int num = it->first;
        int freq = it->second;
        while (num > 0 || freq > 0) {
            if (num > 0) {
                num /= 10;
                number_digits++;
            }
            if (freq > 0) {
                freq /= 10;
                freq_digits++;
            }
        }
        if (number_digits > max_num_digits) {
            max_num_digits = number_digits;
        }
        if (freq_digits > max_freq_digits) {
            max_freq_digits = freq_digits;
        }
    }

    cout << endl;

    // Loop through the map and print the number and the number of times it occurs
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        // it->first is the key, it->second is the value
        cout << setw(max_num_digits) << it->first << setw(0) << " occurs " << setw(max_freq_digits) << it->second << setw(0) << " times" << endl;
    }

    return 0;
}
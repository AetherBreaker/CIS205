// Jacob Ogden
// 4/15/2023

#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int main() {
    // Open the file "numbers.txt" for reading
    fstream file("numbers.txt");
    string line;

    // Three vectors to hold the three types of matches
    vector<string> decimalmatches;
    vector<string> wholematches;
    vector<string> greatermatches;

    // Read the file line by line until the end of file is reached
    while (!file.eof()) {
        // Read a line from the file
        file >> line;

        // Search for decimal numbers in the line using a regular expression
        smatch match;
        regex decimal("([0-9]+\\.[0-9]+)");
        if (regex_search(line, match, decimal)) {
            // Add each match to the decimalmatches vector
            for (auto m : match) {
                decimalmatches.push_back(m);
            }
        }

        // Search for whole numbers in the line using a regular expression
        regex whole("([0-9]+)");
        if (regex_search(line, match, whole)) {
            // Add each match to the wholematches vector
            for (auto m : match) {
                wholematches.push_back(m);
            }
        }

        // Search for numbers greater than 25 in the line using a regular expression
        regex greater("([0-9]+\\.?[0-9]*)");
        if (regex_search(line, match, greater)) {
            // Add each match to the greatermatches vector if it's greater than 25
            for (auto m : match) {
                if (stod(m) > 25) {
                    greatermatches.push_back(m);
                }
            }
        }
    }
    // Close the file
    file.close();

    // Print out the decimal matches
    cout << "Decimal Matches: " << endl;
    for (auto m : decimalmatches) {
        cout << m << endl;
    }
    cout << endl;

    // Print out the whole matches
    cout << "Whole Matches: " << endl;
    for (auto m : wholematches) {
        cout << m << endl;
    }
    cout << endl;

    // Print out the greater matches
    cout << "Greater Matches: " << endl;
    for (auto m : greatermatches) {
        cout << m << endl;
    }
    cout << endl;

    // Exit the program with no errors
    return 0;
}

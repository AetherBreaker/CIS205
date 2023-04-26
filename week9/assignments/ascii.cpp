// Jacob Ogden
// 3/17/2023

// Write a program that uses a for statement that displays a table of ASCII values for the
// characters in the ASCII character set from 33 to 126.
// The program should display the decimal, octal, hexidecimal, and character value for each
// character.
// Use the dec, oct, and hex manipulators to display the integer values.
// Name your program ascii.cpp
// Thoroughly document your code.

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::dec;
using std::oct;
using std::hex;

int main() {
    // Display the header.
    cout << "Decimal\tOctal\tHex\tCharacter" << endl;

    // Loop through the ASCII characters.
    for (int i = 33; i <= 126; i++) {
        // Display the decimal, octal, and hex values.
        cout << dec << i << "\t";
        cout << oct << i << "\t";
        cout << hex << i << "\t";

        // Display the character.
        cout << static_cast<char>(i) << endl;
    }

    return 0;
}


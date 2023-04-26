// Jacob Ogden
// 3/16/2023

#include <iostream>
#include <bitset>

using std::cout;
using std::cin;
using std::endl;
using std::bitset;


unsigned int reverseBits(unsigned int value) {
    // Create a variable to hold the reversed bits.
    unsigned int reversedBits = 0;

    // Loop through the bits in the value.
    for (int i = 0; i < 32; i++) {
        // Shift the reversed bits to the left by 1.
        reversedBits <<= 1;

        // If the current bit is a 1, set the rightmost bit of the reversed bits to 1.
        if (value & 1) {
            reversedBits |= 1;
        }

        // Shift the value to the right by 1.
        value >>= 1;
    }

    // Return the reversed bits.
    return reversedBits;
}

int main() {
    // Get the value from the user.
    unsigned int value;
    cout << "Enter an integer value: ";
    cin >> value;

    // Display the bits before the bits are reversed.
    cout << "The bits before the bits are reversed are: " << bitset<32>(value) << endl;

    // Reverse the bits.
    value = reverseBits(value);

    // Display the bits after the bits are reversed.
    cout << "The bits after the bits are reversed are: " << bitset<32>(value) << endl;

    // Display the value after the bits are reversed.
    cout << "The value after the bits are reversed is: " << value << endl;

    return 0;
}

// manipulators.cpp

// examples of using stream manipulators  for an int, float, and char

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i;
    float f;
    double d;
    char c;

    // Input values
    cout << "Enter an integer: ";
    cin >> i;
    cout << "Enter a float: ";
    cin >> f;
    cout << "Enter a character: ";
    cin >> c;

    // Display values in binary, hex, octal, and decimal formats
    cout << endl;
    cout << "Integer: " << i << endl;
    cout << "Binary: " << bitset<sizeof(int)*8>(i) << endl;         // because we don't know the size of the int.  
    cout << "Hex: 0x" << hex << i << endl;
    cout << "Octal: 0" << oct << i << endl;
    
    cout << endl;
    cout << "Float: " << f << endl;
    cout << "Hex: 0x" << hexfloat << f << std::endl;    cout << endl;
    
    cout << endl;
    cout << "Char: " << c << endl;
    cout << "Binary: " << bitset<8>(c) << endl;
    cout << "Hex: 0x" << hex << (int)c << endl;
    cout << "Octal: 0" << oct << (int)c << endl;

    return 0;
}

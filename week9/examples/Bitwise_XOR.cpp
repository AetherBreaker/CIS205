//bitwise_XOR.cpp

#include <iostream>

using namespace std;

int main() {
	 int a = 5; // 0000 0101 in binary
	 int b = 9; // 0000 1001 in binary
	
	// perform bitwise AND operation on a and b
	 int c = a ^ b; // 0000 0001 in binary
	
	cout << "Bitwise AND..." << endl;
	cout << "sets each bit in the result to 1 if the corresponding bit in either " << endl;
	cout << "(BUT NOT both) operand(s) is 1." << endl;
	
	cout << "a = " << a << " (binary: " << bitset<8>(a) << ")" << endl;
	cout << "b = " << b << " (binary: " << bitset<8>(b) << ")" << endl;
	cout << "c = " << c << " (binary: " << bitset<8>(c) << ")" << endl << endl;
	
	return 0;
}
	
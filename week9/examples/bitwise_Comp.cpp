//bitwise_Comp.cpp
#include <iostream>

using namespace std;

int main() {
	unsigned int a = 5; 
	
	unsigned int b = ~a;
	
	cout << "Bitwise ~..." << endl;
	cout << "sets all 0 bits in its operand to 1 in the result and " << endl;
	cout << "all 1 bits in its operand to 0 in the result."  << endl; 

	cout << "a = " << a << "\t\t\t" << " (binary: " << bitset<8>(a) << ")" << endl;
	cout << "b = " << b << '\t' <<" (binary: " << bitset<8>(b) << ")" << endl;
	
	return 0;
}
	
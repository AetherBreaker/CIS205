//bitwise_LShift.cpp
#include <iostream>

using namespace std;

int main() {
	unsigned int a = 5; 
	
	unsigned int b = a << 1;
	
	cout << "Bitwise <<..." << endl;
	cout << "shifts the bits of the left operand to the LEFT by the number of bits" << endl; 
	cout <<	"specified in its right operand (in this case 1)..." << endl;
	
	cout << "a = " << a << '\t' << " (binary: " << bitset<8>(a) << ")" << endl;
	cout << "b = " << b << '\t' <<" (binary: " << bitset<8>(b) << ")" << endl;
	
	return 0;
}
	
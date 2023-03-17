//bitset1.cpp  

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	cout << "a listing of ints from 0 to 255 with their 4-bit binary equivalents." << endl;
	cout << "(the max is 255 with 8 bits, or 2*2*2*2*2*2*2*2)" << endl;
	
	for(int x = 0; x < 256; x++)
		cout << x << '\t' << bitset<8>(x) << endl;
}
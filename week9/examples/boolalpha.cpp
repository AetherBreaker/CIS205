// boolalpha.cpp
// sample code demonstrating the use of boolalpha 
// and noboolalpha state manipulators.

#include <iostream>
using namespace std;

int main() {
   
   bool test = false;
   
   // Original (default) output - prints 0 or 1
   cout << "Default behavior: "  << test << endl;

   // Using boolalpha to print true or false instead of 1 or 0
   
   cout << "Using boolalpha:   " << boolalpha << test << endl;
   
   // Using noboolalpha to turn true/false off

   cout << "Using noboolalpha:   " << noboolalpha << test << endl;
   
   return 0;
}

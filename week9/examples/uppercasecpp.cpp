// uppercase.cpp
// demonstrating the use of the uppercase/nouppercase state manipulators.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   float x = 16.735;

   // Default behavior - lowercase letters are printed
   cout << "Default format: " << x << endl;
   cout << "Default format (hex): " << hexfloat <<  x << endl;
   cout << "uppercase turned ON:  " << uppercase <<  x << endl;
   cout << "uppercase turned OFF: " << nouppercase;               // did it this way to show 
   cout << hexfloat << x << endl;                                                 // that it doesn;t have to be 
                                                                                                   // on the same line.
   return 0;
}

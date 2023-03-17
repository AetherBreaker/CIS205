#include <iostream>
using namespace std;

int main() {
   int x = 212;

   // Default behavior - no prefix is printed
   cout << "Original format of x: " << x << endl;

   cout << "format (oct): "  << oct << x << endl;  
   
   cout << "format (hex): " << hex << x << endl;  
   
   cout << "Turn on showbase" << showbase << endl;

   cout << "Using showbase (oct): " << oct << x << endl;  
   
   cout << "Using showbase (hex): " << hex << x << endl;  
   
   cout << "Turn off  showbase" << noshowbase << endl;
   
   cout << "oct: " << hex << x << endl;
   cout << "hex: " << hex << x << endl;
   


   return 0;
}

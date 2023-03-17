// setfill.cpp
// use of the setw(), setfil(), left, and right manipulators...

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x = 1;
    int y = 314;
    int z = 612943;
    
    cout << "setfill('#') << setw(10) << left..." << endl;
    
    cout << setfill('#') << setw(10) << left << x << endl;
    cout << setfill('#') << setw(10) << left << y << endl;
    cout << setfill('#') << setw(10) << left << z << endl << endl;
    
    cout << "setfill('+') << setw(8) << right..." << endl;
    cout << setfill('+') << setw(8) << right << x << endl;
    cout << setfill('+') << setw(8) << right << y << endl;
    cout << setfill('+') << setw(8) << right << z << endl << endl;

    
    
    return 0;
}

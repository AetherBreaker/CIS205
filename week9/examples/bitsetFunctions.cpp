//bitsetFunctions.cpp

// Examples of using bitset functions...

#include <iostream>
#include <bitset>

using namespace std;

bitset<8> dipSwitch;                                        // create a bitset with 8 bits

void Display() {cout << "dipSwitch = " << dipSwitch << endl << endl;}
    

int main() {
    
    cout << "Initial dipSwitch settitngs..." << endl;
    
    Display();
    
    cout << "Turn switches #1 and #3 on..." << endl;
 
    dipSwitch[0] = 1; // set the first bit to 1
    dipSwitch[2] = 1; // set the third bit to 1

    Display();
    
    cout << "Test to see if switch #1 is on..." << endl;
    
    if(dipSwitch.test(0))
        cout <<"switch #1 is ON" << endl;
    else
        cout <<"switch #1 is ON" << endl;

    cout << "Example of ALL, ANY, and NONE operators..." << endl << endl;
    cout  << "dipSwitch\t" << "all\t" << "any\t" << "none" << endl;
    cout << dipSwitch << '\t' << dipSwitch.all() << '\t' << dipSwitch.any() << '\t' << dipSwitch.none() << endl << endl;
    
    cout << "Display the number of switches set to ON..." << endl;
    
    cout << dipSwitch << '\t' << dipSwitch.count() << endl << endl;
    
    cout << "Display the size of dipSwitch..." << endl;
    cout << dipSwitch << '\t' << dipSwitch.size() << endl << endl;
    
    cout << "Set switch #8 ON and #1 OFF..." << endl;
    
    dipSwitch.set(7);
    dipSwitch.reset(0);
    
    Display();
    
    cout << "Toggle all the switches..." << endl;
    
    dipSwitch.flip(); 
    
    Display();

    return 0;
}

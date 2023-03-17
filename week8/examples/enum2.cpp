// enum2.cpp
// simple example of using an enum
// 

#include <iostream>

enum eGroup 				// really an enum is set of ints...
{							// 
    x, y, z
};							// note: enums end with }: 
// (like a struct or class)


using namespace std;
int main(int argc, char *argv[]) {
    eGroup value = y;

    if (value == y) {
        cout << "value = " << value << endl;
    }

    return 0;

}
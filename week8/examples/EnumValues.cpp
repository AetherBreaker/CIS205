// enumValues.cpp
// another simple example of using an enum with values
// 

#include <iostream>

enum extras { ram = 2, disk = 3, monitor = 4 };

using namespace std;
int main(int argc, char *argv[]) {
    int extraCharge = ram + disk;

    cout << extraCharge << endl;

    return 0;

}
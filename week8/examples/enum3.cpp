// enum3.cpp
// simple example of using an enum in various ways
//

#include <iostream>

enum tom 						//default type
{
    a, b, c
};

enum dick: short {
    p = 5, q, r
};

enum harry: long					// note that the numbers are in order
{								// otherwise, lookups may not work.
    w = 10, x = 4, y = 12, z = 2		// just doint it here for an example. 
};

using namespace std;
int main(int argc, char *argv[]) {

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;

    cout << "w = " << w << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;

}
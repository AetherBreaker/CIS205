// enum4.cpp
// simple example of using an enum of type char
//
// a char is an integral type, 
// it can be used as the underlying type of an enum. This means that you can declare constants of type char in an enum just like you can declare constants of type int or any other integral type.
#include <iostream>

enum c: char {
    a = 'A',
    b = 'B',
    c = 'C'
};

using namespace std;
int main(int argc, char *argv[]) {

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;

}
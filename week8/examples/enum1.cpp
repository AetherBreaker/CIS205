// enum1.cpp
// no enum used.  Cannot group variables x, y, and z togerher
#include <iostream>

int x = 1;
int y = 2;
int z = 3;

using namespace std;
int main(int argc, char *argv[]) {
    int value = y;

    if (value == y) {
        cout << "instructions will run now..," << endl;
    }

}
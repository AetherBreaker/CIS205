// ThreeFives.cpp
// Print every number between 1 and 100, However for numbers that are multiples of 3 print "Threes"
// and for numbers that are multiples of five print "Fives."
// For numbers that are multiples of both 3 and 5 print "ThreeFives".
// Compile and run it with both compilers.
// Jacob Ogden

#include <iostream>

using std::cout;
using std::endl;

int main() {

    bool three = false;
    bool five = false;

    for (int i = 1; i <= 100; i++) {
        three = false;
        five = false;

        if (i % 3 == 0)
            three = true;

        if (i % 5 == 0)
            five = true;

        if (three && five)
            cout << "ThreeFives" << endl;
        else if (three)
            cout << "Threes" << endl;
        else if (five)
            cout << "Fives" << endl;
        else
            cout << i << endl;
    }

    return 0;
}
// Jacob Ogden
// 2/1/2023
// Circle class source file

#include "Circles.hpp"

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::string;

void displayCircle(Circle *cPtr, string name) {
    cout << name << ":\n";
    cout << "  Radius: " << cPtr->radius << "\n";
    cout << "  Circumference: " << cPtr->circumference() << "\n";
    cout << "  Circle Address: " << cPtr->CircleAddress << "\n" << endl;
}

int main() {
    Circle c1(3.1);
    Circle c2 = &c1;

    displayCircle(&c1, "c1");
    displayCircle(&c2, "c2");

    c2.radius = 6.2;

    displayCircle(&c1, "c1");
    displayCircle(&c2, "c2");

    return 0;
}
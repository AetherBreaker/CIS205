// CopyConstructor2.cpp
// Simple example of copying a class...
// All is well and good, but what happens if you have reference objects
// (pointers) that need to be reinitialized to point to the correct objects?

#include <iostream>

class  foo {
    public:
    int x = 5;
    foo *fPtr = this;
    foo() {
        std::cout << "foo constructor. x = " << x << std::endl;
        std::cout << "fPtr Address: " << fPtr << std::endl;
    }

};

int main(int argc, char *argv[]) {
    foo bar;
    foo x = bar;
    std::cout << "bar.x = " << bar.x << std::endl;
    std::cout << "foo fPtr Address = " << bar.fPtr << std::endl;
    std::cout << "x fPtr Address = " << x.fPtr << std::endl;
    std::cout << "fPtr for x and foo are pointing to the same location." << std::endl;
    std::cout << "that is a big problem!" << std::endl;

    return 0;
}
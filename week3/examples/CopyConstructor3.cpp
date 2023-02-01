// CopyConstructor3.cpp
// Simple example of copying a class using a copy constructor...

#include <iostream>

class  foo {
    public:
    int x;
    foo *fPtr = this;
    foo(int a) {
        x = a;
        std::cout << "foo constructor. x = " << x << std::endl;
        std::cout << "fPtr Address: " << fPtr << std::endl;
    }

    // Copy Constructor...
    foo(foo *fooptr)								// pointer to a foo object.  
    {
        x = fooptr->x;
        std::cout << "foo constructor. x = " << x << std::endl;
        std::cout << "fPtr Address: " << fPtr << std::endl;
    }
};

int main(int argc, char *argv[]) {
    foo bar(3);
    foo x = &bar;
    std::cout << "bar.x = " << bar.x << std::endl;
    std::cout << "foo fPtr Address = " << bar.fPtr << std::endl;
    std::cout << "x fPtr Address = " << x.fPtr << std::endl;

    return 0;
}
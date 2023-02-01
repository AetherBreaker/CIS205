// CopyConstructor1.cpp
// Simple example of copying a class...

#include <iostream>

class  foo {
    public:
    int x = 5;
    foo() {
        std::cout << "foo constructor. x = " << x << std::endl;
    }

};
using namespace std;
int main(int argc, char *argv[]) {
    foo bar;
    foo x = bar;
    std::cout << "bar.x = " << bar.x << std::endl;
    return 0;
}
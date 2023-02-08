// Jacob Ogden
// 2/1/2023
// Source file for Unique project
#include "Unique.hpp"
#include <memory>
#include <iostream>

using std::unique_ptr;
using std::cout;
using std::endl;


unique_ptr<Foo> process(unique_ptr<Foo> ptr) {
    ptr->setX(ptr->getX() * 2);
    return std::move(ptr);
}


int main() {
    unique_ptr<Foo> foo1 = std::make_unique<Foo>(5);
    foo1 = process(std::move(foo1));

    cout << "foo1:\n  x = " << foo1->getX() << "\n" << endl;

    unique_ptr<Foo> foo2 = process(std::move(foo1));
    cout << "foo2:\n  x = " << foo2->getX() << endl;

    return 0;
}
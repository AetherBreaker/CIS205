// auto_ptr1.cpp

#include<iostream>
#include<memory>        // for auto_ptr

using std::cout;
using std::endl;
using std::auto_ptr;


void foo() {
    auto_ptr<int> p1(new int(42));
    cout << "*p1 = " << *p1 << endl;
    cout << "p1.get() = " << p1.get() << endl;
    cout << "&p1 = " << &p1 << endl << endl;

    auto_ptr<int> p2 = p1;
    cout << "*p2 = " << *p2 << endl;
    cout << "p2.get() = " << p2.get() << endl;
    cout << "&p2 = " << &p2 << endl << endl;
}

int main() {
    foo();
    return 0;
}

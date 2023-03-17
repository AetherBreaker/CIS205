// PreFix.cpp
// an example of using an  overload on a prefix increment operator.


#include<iostream>

class SomeObject {
    public:
    SomeObject(int value) {
        x = value;
    }

    // prefix increment operator overload
    SomeObject &operator++() {
        x++;
        return *this;
    }

    int getValue() const {
        return  x;
    }

    private:
    int  x;
};

int main() {
    SomeObject obj(5);

    // use prefix increment operator on obj
    ++obj;

    // print the new value of obj
    std::cout << obj.getValue() << std::endl;

    return 0;
}

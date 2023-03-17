// PreFix.cpp
// an example of using an  overload on a prefix increment operator.


// Look at the in-class source code example named “Prefix.cpp”
// which is an example of using an overload prefix increment operator (eg, ++x).
// Can you just change the function to use a postfix increment operator (eg, x++)?
// Modify the Prefix.cpp program to use a postfix increment operator instead.

#include<iostream>

class SomeObject {
    public:
    SomeObject(int value) {
        x = value;
    }

    // Yes, first you have to make the operator overload have an int parameter.
    // Then you have to make a copy of the object before the increment.
    // Then you increment the object.
    // Then you return the copy of the object before the increment.

    // prefix increment operator overload
    SomeObject &operator++(int) {
        SomeObject temp(*this);
        x++;
        return temp;
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
    obj++;

    // print the new value of obj
    std::cout << obj.getValue() << std::endl;

    return 0;
}

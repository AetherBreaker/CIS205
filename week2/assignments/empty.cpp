// unique_ptr2.cpp

#include <memory>
#include <iostream>

using std::unique_ptr;
using std::cout;
using std::endl;
using std::string;

class someObj {
    public:
    int t;
    someObj(int x) {
        t = x;
        cout << "someObj created - t = " << t << endl;
    }

    ~someObj() {
        cout << "someObj destroyed" << endl;
    }
};

// function to check if any kind of unique_ptr is empty
template <typename T>
void is_empty(std::unique_ptr<T> const &p, string s) {
    if (!p)
        cout << s << " is empty" << endl;
    else
        cout << s << " is not empty" << endl;
}

int main() {

    unique_ptr<someObj> objPtr1(new someObj(32)); // Create a unique_ptr
    // object through raw pointer

    int t1 = objPtr1->t;                            // Access the element
    // through unique_ptr  
    cout << "t1 = " << t1 << endl;

    //  unique_ptr<someObj> objPtr2 = objPtr;  // Compile error- cannot copy

    unique_ptr<someObj> objPtr2;

    is_empty(objPtr1, "objPtr1");

    is_empty(objPtr2, "objPtr2");

    //move objPtr1 to objPtr2 (transfer ownership

    objPtr2 = std::move(objPtr1);

    cout << "move completed..." << endl;

    is_empty(objPtr1, "objPtr1");

    is_empty(objPtr2, "objPtr2");

    return 0;
}

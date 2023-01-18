// auto_ptr1.cpp

#include<iostream>
#include<memory>        // for auto_ptr

using namespace std;

void foo()
{
   auto_ptr<int> p1(new int(42));

   auto_ptr<int> p2 = p1;           //p1 and p2 both point to same object
                                    //the object they both point to ends
                                    //ends up getting deleted twice, leading to
                                    //undefined behavior.   
}

int main()
{
    foo();
    return 0;
}

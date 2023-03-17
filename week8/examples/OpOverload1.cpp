// OpOverload1.cpp
// example of a overloaded + operator.
// (modified from an geeksforgeeks.com example)

#include<iostream>

using namespace std;
 
class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {real = r;   imag = i;}
     
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const &obj) {
         Complex res;
         res.real = real + obj.real;
         cout << "res.real  = " << res.real << endl;
         res.imag = imag + obj.imag;
         cout << "res.imag  = " << res.imag << endl;
         return res;
    }
    void print() {cout << real << " + i" << imag << endl;}
    };
 
int main()
{
    Complex c1(10, 5), c2(2, 4);
    
    c1.print();
    c2.print();
    Complex c3 = c1 + c2;
    c3.print();
}
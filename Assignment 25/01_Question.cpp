// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex number

#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;

public:
    void setComplex(int _real_, int _imaginary_)
    {
        real = _real_;
        imaginary = _imaginary_;
    }
    void printComplex()
    {
        cout << "real: " << real << endl;
        cout << "imaginary: " << imaginary << endl;
    }
};

int main()
{
    complex c;
    c.setComplex(4,7);
    c.printComplex();
    return 0;
}
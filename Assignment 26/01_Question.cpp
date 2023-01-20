// Define a class Complex to represent a complex number with instance variables a and b 
// to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)

#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;

public:
    void setData(int _real_, int _imaginary_)
    {
        real = _real_;
        imaginary = _imaginary_;
    }
    void showData()
    {
        cout << "real: " << real << endl;
        cout << "imaginary: " << imaginary << endl;
    }
    complex ComplexAdd(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;

        return temp;
    }
};

int main()
{
    complex c,c2,c3;
    c.setData(4,7);
    c.showData();
    c2.setData(23,45);
    c2.showData();

    c3 = c2.ComplexAdd(c);
    
    c3.showData();

    return 0;
}
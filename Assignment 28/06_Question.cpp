// 6. Create a complex class and overload assignment operator for that class.

#include <iostream>
using namespace std;

class Complex
{
    int imagnary, real;

public:
    Complex()
    {
    }
    Complex(int im, int real)
    {
        imagnary = im;
        this->real = real;
    }
    Complex operator=(Complex &c)
    {
        imagnary = c.imagnary;
        real = c.real;

        return *this;
    }
    void display()
    {
        cout << "real is: " << real << " and Imagnary is: " << imagnary << endl;
    }
};

int main()
{
    Complex c(3, 4);
    Complex d = c;
    c.display();
    d.display();
    return 0;
}
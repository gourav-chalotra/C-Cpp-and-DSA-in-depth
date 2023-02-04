// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
#include <iostream>
using namespace std;

class Complex
{
    int x;
    int y;

public:
    Complex(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Complex() {}
    Complex operator+(Complex a)
    {
        Complex temp;
        temp.x = a.x + x;
        temp.y = a.y + y;
        return temp;
    }
    Complex operator-(Complex a)
    {
        Complex temp;
        temp.x = x - a.x;
        temp.y = y - a.y;
        return temp;
    }
    Complex operator*(Complex a)
    {
        Complex temp;
        temp.x = x * a.x;
        temp.y = y * a.y;
        return temp;
    }
    int operator==(Complex a)
    {
        return (x == a.x) ? (y == a.y) ? 1 : 0 : 0;
    }
    void displayValue()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 2), c3;
    cout << "Value of c1" << endl;
    c1.displayValue();
    cout << "Value of c2" << endl;
    c2.displayValue();
    c3 = c1 + c2;
    cout << "Value of c3 value after c1+c2 " << endl;
    c3.displayValue();
    c3 = c1 - c2;
    cout << "Value of c3 after c1-c2 " << endl;
    c3.displayValue();
    cout << "Value of c3 after c1*c2 " << endl;
    c3 = c1*c2;
    c3.displayValue();
    if (c1 == c2)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "No equal" << endl;
    }
    return 0;
}
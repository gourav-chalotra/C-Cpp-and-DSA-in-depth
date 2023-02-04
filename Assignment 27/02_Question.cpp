// Write a C++ program to overload unary operators that is increment and decrement.
#include <iostream>
using namespace std;
class Complex
{
    int x, y;

public:
    Complex() {}
    Complex(int x, int y) { this->x = x, this->y = y; }
    void get() { cout << x << " " << y << endl; }
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Complex operator++(void) // pre increment
    {
        x++;
        y++;
        return *this;
    }
    Complex operator--(void) // pre decrement
    {
        x--;
        y--;
        return *this;
    }
    Complex operator++(int) // post increment
    {
        Complex c;
        c.x = x;
        c.y = y;
        x++;
        y++;
        return c;
    }
    Complex operator--(int) // post decrement
    {
        Complex c;
        c.x = x;
        c.y = y;
        x--;
        y--;
        return c;
    }
    friend void display(const Complex &);
};
void display(const Complex &c)
{
    cout << "x: " << c.x << " y: " << c.y << endl;
}
int main()
{
    Complex c1;
    c1.set(5, 2);
    ++c1;
    display(c1++);
    display(c1);
    c1.get();
    return 0;
}
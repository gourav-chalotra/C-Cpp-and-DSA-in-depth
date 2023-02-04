// 3. Write a C++ program to add two complex numbers using operator overloaded by a friend
// function.
#include <iostream>
using namespace std;
class Complex
{
    int x,y;
public:
    friend Complex operator+(const Complex &, const Complex &);
    void set(int a,int b)
    {
        this->x = a;
        this->y = b;
    }
    void display()
    {
        cout << "x is: " << x << " y is: "<< y << endl;
    }
};
Complex operator+(const Complex &c, const Complex &c1)
{
    Complex sumComp;
    sumComp.x = c.x + c1.x;
    sumComp.y = c.y + c1.y;

    return sumComp;
}
int main()
{
    Complex A,B,C;
    A.set(1,2);
    A.display();
    B.set(1,2);
    B.display();

    C = A + B;

    C.display();

    return 0;
}
// 1.Write a C++ program to convert Primitive type to Complex type.
// Example -
// int main()
// {
// Complex c1;
// Int x=5;
// c1=x;
// return 0;
// }

#include <iostream>
using namespace std;

class Complex
{
    int x;

public:
    Complex() { x = 0; }
    Complex(int x) { this->x = x; }
    //Assignment opearator overloading
    void operator=(int num)
    {
        this->x = num;
    }
    void displayNum()
    {
        cout << "x is: " << x << endl;
    }
};

int main()
{
    Complex c1;
    c1.displayNum();
    c1 = 34;
    c1.displayNum();
    return 0;
}
// 2. Write a C++ program to convert Complex type to Primitive type.Example -
//     int main()
// {
//     Complex c1;
//     c1.setData(3, 4);
//     int x;
//     x = c1;
//     return 0;
// }

#include <iostream>
using namespace std;

class Complex
{
    int x, y;

public:
    void setXY(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    operator int()
    {
        return x + y;
    }
    void display()
    {
        cout << "x: " << x << " y: " << y << endl;
    }
};

int main()
{
    Complex a;
    a.setXY(3, 4);
    int b = a;
    a.display();
    cout << "b is: " << b << endl;
    return 0;
}
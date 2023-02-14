// 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it.Now add
// functions to support Invent1 to float and Invent1 to Invent2 type.

// Example -
//     int main()
// {
//     Invent1 x(4, 5);
//     Invent2 y;
//     float z;
//     z = x; // Invent1 to float
//     y = x; // Invent1 to Invent2
//     return 0;
// }
#include <iostream>
using namespace std;

class Invent2
{
    int num1, num2;

public:
    Invent2(int num1, int num2) : num1(num1), num2(num2)
    {
    }
    Invent2()
    {
        num1 = 0;
        num2 = 0;
    }
    void display()
    {
        cout << "num1: " << num1 << " num2: " << num2 << endl;
    }
};
class Invent1
{
    int num1, num2;

public:
    Invent1(int num1, int num2) : num1(num1), num2(num2)
    {
    }
    Invent1()
    {
        num1 = 0;
        num2 = 0;
    }
    operator float()
    {
        return float(num1 + num2);
    }
    operator Invent2()
    {
        Invent2 temp(num1, num2);
        return temp;
    }
    void display()
    {
        cout << "num1: " << num1 << " num2: " << num2 << endl;
    }
};

int main()
{
    Invent1 x(4, 5);
    x.display();
    Invent2 y;
    y.display();
    float z;
    z = x; // Invent1 to float
    cout << "z: " << z << endl;
    y = x; // Invent1 to Invent2
    y.display();
    return 0;
}
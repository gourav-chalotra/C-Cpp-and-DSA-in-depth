// Define a class Greatest and define instance member function to find Largest among 3
// numbers using classes.

#include <iostream>
using namespace std;
class Greatest
{
public:
    void largest(int a, int b, int x)
    {
        if (a > b)
        {
            if (a > x)
            {
                cout << a << endl;
            }
            else
            {
                cout << x << endl;
            }
        }
        else if (b > x)
        {
            cout << b << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
    void largest(double num1, double num2, double num3)
    {
        if (num1 > num2)
        {
            if (num1 > num3)
            {
                cout << num1 << endl;
            }
            else
            {
                cout << num3 << endl;
            }
        }
        else if (num2 > num3)
        {
            cout << num2 << endl;
        }
        else
        {
            cout << num3 << endl;
        }
    }
};

int main()
{
    Greatest gn;
    gn.largest(45,34,23);
    gn.largest(452.1,323.4,212.32);
}
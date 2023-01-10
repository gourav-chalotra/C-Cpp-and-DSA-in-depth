// 9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include <iostream>
using namespace std;

void checkMax(int a, int b);
void checkMax(double a, double b);

int main()
{
    int num, num1;
    double a, b;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of num: ";
    cin >> num;
    cout << "Enter value of num1: ";
    cin >> num1;
    checkMax(num, num1);
    checkMax(a, b);

    return 0;
}

void checkMax(int a, int b)
{
    if (a > b)
        cout << "max was: " << a << endl;
    else
        cout << "max was: " << b << endl;
}
void checkMax(double a, double b)
{
    if (a > b)
        cout << "max was: " << a << endl;
    else
        cout << "max was: " << b << endl;
}
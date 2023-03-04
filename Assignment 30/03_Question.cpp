// 3. Write a C++ program to perform arithmetic operations on two numbers and throw an
// exception if the dividend is zero or does not contain an operator
#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sum;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter Secound number: ";
    cin >> num2;

    try
    {
        if (num2 == 0)
        {
            throw num2;
        }
        sum = num1 / num2;
        cout << "Sum is: " << sum << endl;
    }
    catch (int)
    {
        cout << "dividend is zero" << endl;
    }
    return 0;
}
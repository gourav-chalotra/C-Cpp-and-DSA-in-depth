// 2. Write a C++ program to demonstrate try, throw and catch statements.
#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    try
    {
        if (num1 < 10)
        {
            cout << "In the throw block" << endl;
            throw num1;
        }
    }
    catch (int)
    {
        cout << "in the catch block" << endl;
    }
    return 0;
}
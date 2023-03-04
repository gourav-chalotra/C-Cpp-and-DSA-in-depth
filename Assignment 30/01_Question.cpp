// 1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
// integer and string using multiple catch blocks.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num1,num2,c;
    string name;
    cout << "Enter a num1: ";
    cin >> num1;
    cout << "Enter a num2: ";
    cin >> num2;
    cout << "Enter password ";
    cin >> name;
    try
    {
        if (num1 == 0)
        {
            throw num1;
        }
        if(name != "gourav")
        {
            throw name;
        }
        c = num2 / num1;
    }
    catch (int)
    {
        cout << "Dividing with zero Artmatic excetion\n";
    }
    catch(string)
    {
        cout << "Enter a valid password\n";
    }
    
    

    return 0;
}
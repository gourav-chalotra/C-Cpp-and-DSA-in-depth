// 5. Write a C++ program to accept a mobile number and throw an exception if it does not
// contain 10 digits.

#include <iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string PhoneNumber;
    cout << "Enter your phone number: ";
    cin >> PhoneNumber;
    try
    {
        if (PhoneNumber.size() > 10 || PhoneNumber.size() < 10)
        {
            throw PhoneNumber;
        }
        else
        {
            cout << "Number is saved" << endl;
        }
    }
    catch (string)
    {
        cout << "No valid number" << endl;
    }

    return 0;
}
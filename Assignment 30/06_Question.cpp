// 6. Write a C++ program to accept area pincode and throw an exception if it does not
// contain 6 digits.

#include <iostream>
using namespace std;
int checkValidPincode(int num)
{
    int digit_Count = 0, remander;
    while (num)
    {
        digit_Count++;
        remander = num % 10;
        num = num - remander;
        num = num / 10;
    }
    if (digit_Count == 6)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int pincode;
    cout << "Enter your area Pincode: ";
    cin >> pincode;

    try
    {
        if (!checkValidPincode(pincode))
        {
            throw pincode;
        }
    }
    catch (int)
    {
        cout << "Wrong Pincode enter valid pincode (6 digit)" << endl;
    }
}
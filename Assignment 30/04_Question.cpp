// 4. Write a C++ program to accept an email address and throw an exception if it does not
// contain @ symbol.

#include <iostream>
using namespace std;

int main()
{
    string email;
    int password;

    cout << "Enter your Email address: ";
    cin >> email;
    cout << "Enter your password address: ";
    cin >> password;

    try
    {
        if (email.find('@') > email.size()) // email checking system
        {
            throw email;
        }
        else if (password != 434232) // password checking system
        {
            throw password;
        }
    }
    catch (string)
    {
        cout << "Your enterd value is not contaning @ symbol";
    }
    catch (int)
    {
        cout << "entered password is not valid enter right password" << endl;
    }
}
// 7. Write a C++ program to accept a username if the username has less than 6 characters
// or does contain any digit or special symbol.
#include <iostream>
using namespace std;
// 48-57
int usernameValidation(string username)
{
    int size = username.size();
    int digit_present = 0, Alphabet = 0, symbol = 0;
    int n = 0;
    while (n < size)
    {
        if (username[n] <= '9' && username[n] >= '0')
        {
            digit_present++;
        }
        else if ((username[n] <= 'Z' && username[n] >= 'A') || (username[n] <= 'a' && username[n] >= 'a'))
        {
            Alphabet++;
        }
        else
        {
            symbol++;
        }
        n++;
    }
    if (digit_present > 0 && Alphabet > 0 && symbol > 0)
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
    string username;
    cout << "Enter username: ";
    cin >> username;
    try
    {
        if (!usernameValidation(username))
        {
            throw username;
        }
        cout << "your name is strong" << endl;
    }
    catch (string)
    {
        cout << "\nYour username satisfie this following condition to get accepted \n1. one character \n2. one digit \n3. one symbol" << endl;
    }
    return 0;
}
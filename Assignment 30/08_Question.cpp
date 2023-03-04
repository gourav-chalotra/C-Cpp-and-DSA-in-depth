// 8. Write a C++ program to accept a password and throw an exception if the password has
// less than 6 characters or does not contain a digit or does not contain any special
// character or does not contain any capital letter.

#include <iostream>
using namespace std;

int userPasswordValidation(string password)
{
    int size = password.size();
    int digit_present = 0, Alphabet = 0, symbol = 0, smallCharacter = 0;
    int n = 0;
    while (n < size)
    {
        if (password[n] <= '9' && password[n] >= '0')
        {
            digit_present++;
        }
        else if ((password[n] <= 'Z' && password[n] >= 'A'))
        {
            Alphabet++;
        }
        else if (password[n] <= 'a' && password[n] >= 'a')
        {
            smallCharacter++;
        }
        else
        {
            symbol++;
        }
        n++;
    }
    if (digit_present > 0 && Alphabet > 0 && symbol > 0 && smallCharacter > 0)
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
    string password;
    cout << "Enter your Password: ";
    cin >> password;

    try
    {
        if (!userPasswordValidation(password))
        {
            throw password;
        }
        cout << "Strong password" << endl;
    }
    catch (string)
    {
        cout << "\nYour password satisfie this following condition to get accepted \n1. one character \n2. one digit \n3. one symbol" << endl;
    }

    return 0;
}
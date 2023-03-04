// 10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
// characters or does contain a digit or special symbol or space.

#include <iostream>
using namespace std;

void NickNameValidOrNot(string name)
{
    try
    {
        if (name.size() > 8)
        {
            throw 1;
        }
        else
        {
            int i = 0;
            for (i; i < name.size(); i++)
            {
                if (!((name.at(i) >= 'A' && name.at(i) <= 'Z') || (name.at(i) >= 'a' && name.at(i) <= 'z')))
                {
                    throw 's';
                    break;
                }
            }
            if (i == name.size())
            {
                cout << "NickName is valid" << endl;
            }
        }
    }
    catch (int)
    {
        cout << "NickName will be less then 8 characters" << endl;
    }
    catch (char)
    {
        cout << "NickName will don't contail any space or special symbol or digit" << endl;
    }
}
int main()
{
    string nickname = "gourav";
    NickNameValidOrNot(nickname);
    return 0;
}
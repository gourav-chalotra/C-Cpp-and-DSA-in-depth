// 9. Write a C++ program to accept gmail id only and throw an exception if the id does not
// contain @ and gmail.com.
#include <iostream>
#include <vector>

using namespace std;

int checkEmail(string id)
{
    int size = id.size();
    int i = 0;
    string gmailCheck = "gmail.com";
    int checkID = 0, gmail = 0;
    while (i < size)
    {
        if (id.at(i) == '@')
        {
            checkID = 1;
        }
        if (id.at(i) == 'g')
        {
            int j = 0;
            while (j < gmailCheck.size())
            {
                if (gmailCheck.at(j) != id.at(i + j))
                {
                    gmail = 0;
                    break;
                }
                gmail = 1;
                j++;
            }
        }
        i++;
    }
    try
    {
        if (gmail && checkID)
        {
            throw 0;
        }
        else
        {
            throw '1';
        }
    }
    catch (int)
    {
        cout << "valid id" << endl;
    }
    catch (char)
    {
        cout << "not Valid id" << endl;
    }
}

int main()
{
    string email = "gouravchalotra4141@gmail.com";
    checkEmail(email);
}
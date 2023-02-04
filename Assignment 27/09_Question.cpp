// 9. Consider the following class mystring

// Class mystring
// {
//  char str [100];
//  Public:
//  // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to
// Lowercase and vice versa).

#include <iostream>
#include <cstring>
using namespace std;
class mystring
{
    char str[100];
    int size;

public:
    mystring(const char *c)
    {
        size = strlen(c);
        int i = 0;
        for (i; i < size; i++)
        {
            str[i] = *(c + i);
        }
    }
    void displayMyString()
    {
        int i = 0;
        for (i; i < size; i++)
        {
            cout << str[i];
        }
    }
    void operator!()
    {
        int i = 0;
        for (i; i < size; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
            else if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
        cout << endl;
    }
};

int main()
{
    mystring s("GoUrAv ChAlOtRa");
    s.displayMyString();
    !s;
    s.displayMyString();
    return 0;
}
// 6. Create a class CString to represent a string.
//  a) Overload the + operator to concatenate two strings.
//  b) == to compare 2 strings.
#include <iostream>
#include <cstring>
using namespace std;

class CString
{
    char *name;
    int size;

public:
    // default constructor
    CString()
    {
        size = 1;
        name = new char[size];
    }
    // perameterized constructor
    CString(const char *c)
    {
        size = strlen(c);
        delete[] name;
        name = new char[size + 1];
        strcpy(name, c);
    }
    // concating two strings
    CString operator+(const CString &userName)
    {
        int size1 = size + userName.size + 1;
        CString s;
        strcat(name, userName.name);
    }
    ~CString()
    {
        delete[] name;
    }
    void display()
    {
        cout << name << endl;
    }
    void Detail()
    {
        cout << "size of name is: " << strlen(name) << endl;
        cout << name << endl;
    }
    bool operator==(CString &s)
    {
        return !(strcmp(s.name, name));
    }
};

int main()
{
    CString s, s1("Gourav"), s2("Gourav");
    s.Detail();  // --> display string size
    s1.Detail(); // --> display string size
    s2.Detail(); // --> display string size

    s1 + s2;      //--> string concatination
    s1.display(); // --> display string size
    s1.Detail();  // --> display string size
    s2.Detail();  // --> display string size

    if (s1 == s2)
    {
        cout << " Equal" << endl;
        s1.Detail();
        s2.Detail();
    }
    else
    {
        cout << "not equal" << endl;
        s1.Detail();
        s2.Detail();
    }
    return 0;
}
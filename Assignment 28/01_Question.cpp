// 1. Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    friend istream &operator>>(const istream &i, Complex &c)
    {
        cin >> c.real >> c.imaginary;
    }
    friend ostream &operator<<(const ostream &o, Complex const &c)
    {
        cout << c.real << " " << c.imaginary << endl;
    }
};

int main()
{
    Complex c;
    cin >> c;

    cout << c;
    return 0;
}
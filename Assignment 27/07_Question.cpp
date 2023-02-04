// 7. Define a C++ class fraction
// class fraction
// {
//  long numerator;
//  long denominator;
//  Public:
//  fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.

#include <iostream>
using namespace std;

class fraction
{
    long numerator;
    long denominator;

public:
    // default Constructor
    // Perameterized Constructor
    fraction(long n = 0, long d = 0) : numerator(n), denominator(d)
    {}
    // unary operator overloading
    // Pre increment
    fraction operator++(void)
    {
        numerator++;
        denominator++;
        return *this;
    }
    // post increment
    fraction operator++(int)
    {
        fraction temp;
        temp.numerator = numerator;
        temp.denominator = denominator;
        ++numerator;
        ++denominator;
        return temp;
    }
    // display function
    void display()
    {
        cout << "Numerator: " << numerator << endl;
        cout << "denominator: " << denominator << endl;
    }
    // >> overloading using friend function
    friend operator>>(const istream &input, fraction &f);
    // << overloading using friend function
    friend operator<<(const ostream &input, const fraction &f);
};
operator>>(const istream &input, fraction &f)
{
    cout << "\nEnter 1th Fraction value:" << endl;
    cout << "Numerator: ";
    cin >> f.numerator;
    cout << "Denominator: ";
    cin >> f.denominator;
}
operator<<(const ostream &input, const fraction &f)
{
    cout << f.numerator << "/" << f.denominator << endl;
}

main()
{
    fraction f;
    fraction f1(4, 1);
    // taking value
    cin >> f;
    cout << "f++\t: ";
    cout << f++;
    cout << "++f\t: ";
    cout << ++f;
    return 0;
}
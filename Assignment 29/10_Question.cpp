// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
// Dollar and Dollar to Rupee conversion.
// Example
// int main()
// {
//  Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
//  return 0;
// }

#include <iostream>
using namespace std;
class Rupee
{
public:
    int r;
    Rupee(int r) : r(r)
    {
    }
    Rupee()
    {
    }
    void display()
    {
        cout << "Rupee: " << r << endl;
    }
};
class Dollar
{
public:
    int d;
    Dollar(int d) : d(d)
    {
    }
    Dollar(Rupee r)
    {
        d = r.r;
    }
    operator Rupee()
    {
        return this->d;
    }
    void display()
    {
        cout << "Dollar: " << d << endl;
    }
};
int main()

{
    Rupee r = 45;
    r.display();
    r = 12;
    Dollar d = r;
    d.display();
    d = 3;
    r = d;
    r.display();
}
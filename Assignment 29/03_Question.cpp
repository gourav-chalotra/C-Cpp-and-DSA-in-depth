// 3. Create a Product class and convert Product type to Item type using constructor

// EXAMPLE:

// int main()
//  {
//      Item i1;
//      Product p1;
//      p1.setData(3, 4);
//      i1 = p1;
//      return 0;
//  }

#include <iostream>
using namespace std;

class product
{
public:
    int p1, p2;
    product(int p1, int p2) : p1(p1), p2(p2)
    {
    }
    product()
    {
        p1 = 0;
        p2 = 0;
    }
    void show()
    {
        cout << "p1: " << p1 << " p2: " << p2 << endl;
    }
};
class item
{
    int a, b;

public:
    item(int a, int b) : a(a), b(b)
    {
    }
    item(const product &p) { a = p.p1, b = p.p2; }
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void show()
    {
        cout << "a: " << a << " b: " << b << endl;
    }
};
int main()
{

    product p(1, 3);
    p.show();
    item itm(0, 0);
    itm = p;
    itm.show();

    return 0;
}
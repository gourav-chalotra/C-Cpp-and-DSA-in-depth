// 4. Create Product class and convert Product type to Item type using casting operator int main()
// {
//     Item i1;
//     Product p1;
//     p1.setData(3, 4);
//     i1 = p1;
//     return 0;
// }
#include <iostream>
using namespace std;

class item
{
    int a, b;

public:
    item(int a, int b) : a(a), b(b)
    {
    }
    item() { a = 0, b = 0; }
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

class product
{
    int p1, p2;

public:
    product(int p1, int p2) : p1(p1), p2(p2)
    {
    }
    product()
    {
        p1 = 0;
        p2 = 0;
    }
    operator item()
    {
        item temp(p1, p2);
        return temp;
    }
    void show()
    {
        cout << "p1: " << p1 << " p2: " << p2 << endl; 
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
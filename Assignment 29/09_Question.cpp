// 9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
// Example
// int main()
// {
//  int x = 50;
// Dollar d;
// d = x;
// d.display();
//  return 0;
// }
#include <iostream>
using namespace std;
class Dollar
{
    int d;

public:
    Dollar(int x)
    {
        d = x / 82;
    }
    Dollar()
    {
    }
    void display()
    {
        cout << "dollar is: " << d << endl;
    }
};
int main()
{
    Dollar d;
    int x = 100000;
    d = x;
    d.display();
    return 0;
}
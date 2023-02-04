// 5. Consider following class Numbers
// class Numbers
// {
//  int x,y,z;
//  public:
//  // methods
// };
// Overload the operator unary minus (-) to negate the numbers.

#include <iostream>
using namespace std;
class Numbers
{
    int x, y, z;

public:
    // Default constructor
    Numbers()
    {
    }
    // Pre decrement
    Numbers operator--(void)
    {
        --x;
        --y;
        --z;
        return *this;
    }
    // Post Decrement
    Numbers operator--(int)
    {
        Numbers c;
        c.x = x;
        c.y = y;
        c.z = z;
        x--;
        y--;
        z--;
        return c;
    }
    void set(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "x: " << x << " y: " << y << " z: " << z << endl;
    }
};

int main()
{
    Numbers n, n1, n2;
    n.set(2, 3, 1);
    // Pre decrement
    n.display();
    --n;
    n.display();
    // Post decerement
    n--;
    n1.set(1, 2, 3);
    return 0;
}
// 8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such
// that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are
// objects of 3D coordinate class.

#include <iostream>
using namespace std;
class Coordinate
{
    int x, y, z;

public:
    Coordinate(int a, int b, int c)
    {
        x = a, y = b, z = c;
    }
    friend Coordinate operator,(Coordinate c1, Coordinate c2)
    {
        cout << ", called" << endl;
        return c2;
    }
    void display()
    {
        cout << "  x = " << x << " y = " << y << " z = " << z << endl;
    }
    Coordinate()
    {
    }
};
int main()
{
    Coordinate c1(3, 2, 5);
    cout << "\t c1" << endl;
    c1.display();
    cout << "\t c2" << endl;
    Coordinate c2(5, 4, 7);
    c2.display();
    Coordinate c3;
    cout << "\t c3" << endl;
    c3 = (c1, c2);
    c3.display();
    return 0;
}
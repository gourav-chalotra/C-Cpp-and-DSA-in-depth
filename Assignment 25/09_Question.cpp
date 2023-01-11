// 9. Define a class Circle and define an instance member function to find the area of the circle.
#include <iostream>
using namespace std;

class circle
{
    int radoius = 0;

public:
    void area()
    {
        cout << "Area of the circle is: " << 3.14 * radoius * radoius <<" cm"<< endl;
    }
    void setRadious(int r)
    {
        radoius = r;
    }
};
int main()
{
    circle c;
    c.setRadious(2);
    c.area();
    return 0;
}
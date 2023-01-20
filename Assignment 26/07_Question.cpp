// 7. Define a class Box and write a program to enter length, breadth and height and initialise
// objects using constructor also define member functions to calculate volume of the box.
#include <iostream>
using namespace std;

class Box
{

    float length, breath, hight, volume;

public:
    Box(float length, float breath, float hight)
    {
        volume = length * breath * hight;
    }
    float getVolume()
    {
        return volume;
    }
};

int main()
{
    Box b(2, 4, 12);
    cout << "The volume of the box is: " << b.getVolume() << " cube" << endl;
    return 0;
}
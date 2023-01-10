// 5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;

int main()
{
    float length, width, hight, volume;
    cout << "Enter Length of a cuboid: ";
    cin >> length;
    cout << "Enter Width of a cuboid: ";
    cin >> width;
    cout << "Enter hight of a cuboid: ";
    cin >> hight;

    volume = length * width * hight;
    cout << "The Volume of a cuboid is: " << volume <<" cube " << endl;
    return 0;
}
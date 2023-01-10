// 4. Write a C++ program to calculate the area of a circle
#include <iostream>
using namespace std;

int main()
{
    float radious, Area;
    cout << "Enter the radious of the circle: ";
    cin >> radious;

    Area = 3.14 * (radious) * (radious);

    cout << "The area of a circle in readious is: " << Area << " cm(square)" << endl;
    return 0;
}
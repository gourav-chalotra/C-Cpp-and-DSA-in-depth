// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include <iostream>
using namespace std;
void area(float radius) // Circle
{
    cout << "Area of circle is: " << 3.14 * radius * radius << endl;
}
void area(float length, float width) // Rectangle
{
    cout << "Area of rectangle is: " << length * width << endl;
}
void area(int height, int base) // Triangle
{
    cout << "Area of Triangle is: " << (1 / 2)*((float) base)*(height) << endl;
}
int main()
{
    float hight = 12, base = 60;
    float radius = 9, length = 30, width = 20;
    area(radius);
    area(hight, base);
    area(length, width);
    return 0;
}
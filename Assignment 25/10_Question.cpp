// 10. Define a class Area and define instance member functions to find the area of the 
// different shapes like square, rectangle , circle etc.

#include<iostream>
using namespace std;
class Area
{
public:
    void Rectangle(int length,int width)
    {
        cout << "area: "<< length * width << endl; 
    }
    void circle(int radious)
    {
        cout << "area: "<< 3.14 * radious << endl; 
    }
    void square(float length,float width)
    {
        cout << "area: "<< length * width << endl; 
    }
};
int main()
{
    Area a;
    a.circle(5);
    a.Rectangle(5,8);
    a.square(15,7);
}
// 8. Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
    public:
    void area(int length,int witdh)
    {
        cout << "area: "<< length*witdh << endl;
    }
};
int main()
{
    Rectangle ract;
    ract.area(34,23);
}

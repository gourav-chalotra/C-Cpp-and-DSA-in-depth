// 11. Create a class Marks that have one member variable marks and one member function
// that will print marks. We know that we can access member functions using (.) dot operator. Now
// you need to overload (->) arrow operator to access that function
#include <iostream>
using namespace std;
class Marks
{

public:
    int x;
    Marks()
    {
    }
    Marks(int x)
    {
        this->x = x;
    }
    void operator()(int a, int b, int c)
    {
        x = a + c + 5;
    }
    Marks *operator->()
    {
        return this;
    }
    void printMarks()
    {
        cout << "value: " << x << endl;
    }
};
int main()
{
    Marks a(3);
    // a(1, 2, 3);
    cout << a->x << endl;
    a->printMarks();
}

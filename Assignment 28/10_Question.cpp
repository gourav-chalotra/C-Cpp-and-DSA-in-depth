// 10. Create a Distance class having 2 instance variable feet and inches. Also create default 
// constructor and parameterized constructor takes 2 variables . Now overload () function call 
// operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15.


#include <iostream>
using namespace std;
class Distance
{
    int feet, inches;

public:
    Distance()
    {
    }
    Distance(int feet, int inch)
    {
        this->feet = feet;
        this->inches = inch;
    }
    void operator()(int a, int b, int c)
    {
        feet = a + c + 5;
        inches = a + b + 15;
    }

    void display()
    {
        cout << "feet: " << feet << endl;
        cout << "inches: " << inches << endl;
    }
};
int main()
{
    Distance a(3, 4);
    a.display();
    a(1,2,3);
    a.display();
}

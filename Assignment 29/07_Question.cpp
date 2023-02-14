// 7. Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
//  Time t1(2,30);
//  t1.display();
//  Minute m1;
//  m1.display();
//  m1=t1 // Fetch minute from time
//  t1.display();
//  m1.display();
//  return 0;
// }

#include <iostream>
using namespace std;

class Time
{
public:
    int h, m;
    Time(int h, int m) : h(h), m(m)
    {
    }
    void display()
    {
        cout << "hours " << h << " mint " << m << endl;
    }
};
class Minute
{
    int mint;

public:
    Minute()
    {
        mint = 0;
    }
    Minute(Time t)
    {
        mint = t.m;
    }
    void display()
    {
        cout << "mint " << mint << endl;
    }
};
int main()
{
    Time t1(2, 30);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1; 
    t1.display();
    m1.display();
    return 0;
}

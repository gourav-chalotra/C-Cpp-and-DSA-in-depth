// 6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e int )
// to Time class.
// Example-

#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time(int d)
    {
        m = d / 60;
        s = d % 60;
        h = m / 60;
    }
    void display()
    {
        cout << "hours: " << h << "\n"
             << "min: " << m << "\n"
             << "secound: " << s << endl;
    }
};

int main()
{
    int duration;
    cout << "Enter time duration in secounds: ";
    cin >> duration;
    Time t1 = duration;
    t1.display();
    return 0;
}

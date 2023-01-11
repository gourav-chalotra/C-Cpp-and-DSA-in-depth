// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to set
// values for time and display values of time
#include <iostream>
using namespace std;

class time
{
    int hours, mints, secound;

public:
    void setTime(int hr, int min, int sec)
    {
        hours = hr;
        mints = min;
        secound = sec;
    }
    void displayTime()
    {
        cout << hours << " hr ";
        cout << mints << " min ";
        cout << secound << " sec" << endl;
    }
};

int main()
{
    time t;
    t.setTime(4,23,10);
    t.displayTime();
}
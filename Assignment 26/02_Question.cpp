// 2. Define a class Time to represent a time with instance variables h,m and s to store hour,
// minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)

#include <iostream>
using namespace std;
class time
{
    int h, m, s;

public:
    void setTime(int hours, int mint, int sec)
    {
        h = hours;
        m = mint;
        s = sec;
    }
    void showTime()
    {
        cout << h << "hr " << m << "min " << s << "sec" << endl;
    }
    void normalize()
    {
        int secound = s % 60;
        int mint = (s / 60) + (m % 60);
        int hours = (m / 60) + (h % 12);

        s = secound;
        m = mint;
        h = hours;
    }
    time Add(time t)
    {
        time temp;
        temp.h = t.h + h;
        temp.m = t.m + m;
        temp.s = t.s = s;

        return temp;
    }
};
int main()
{
    time t, e, sumT;
    t.setTime(3, 22, 2);
    e.setTime(4, 40, 4);
    e.showTime();
    t.showTime();
    sumT = e.Add(t);
    sumT.showTime();
    sumT.normalize();
    sumT.showTime();

    return 0;
}
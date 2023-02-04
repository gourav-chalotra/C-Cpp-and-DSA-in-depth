// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.

#include <iostream>
using namespace std;

class Time
{
    int Hours, Minutes, Seconds;

public:
    friend void operator>>(const istream &s, Time &t);
    friend void operator<<(const ostream &s,const Time &t);
    void display()
    {
        cout << "Hours: " << Hours << endl;
        cout << "Minutes: " << Minutes << endl;
        cout << "Seconds: " << Seconds << endl;
    }
    // ==
    bool operator==(const Time &t)
    {
        return ((t.Hours == Hours) && (t.Minutes == Minutes) && (t.Seconds == Seconds)) ? true : false;
    }
};
// >>
void operator>>(const istream &s, Time &t)
{
    cout << "Enter Hour's: ";
    cin >> t.Hours;
    cout << "Enter Minutes: ";
    cin >> t.Minutes;
    cout << "Enter Seconds: ";
    cin >> t.Seconds;
}
// <<
void operator<<(const ostream &s,const Time &t)
{
    cout << endl;
    cout << "Hour's: " << t.Hours << endl;
    cout << "Minutes: " << t.Minutes << endl;
    cout << "Secound: " << t.Seconds << endl;
}
int main()
{
    Time t, t1, t2;
    cout << "\nEnter First Time\n----------------"<<endl;
    cin >> t;
    cout << "\nEnter Secound Time\n________________"<<endl;
    cin >> t1;
    cout << "\nFirst Time";
    cout << t;
    cout << "\nSecound Time";
    cout << t1;
    t1 == t ? cout << "equal" : cout << "not equal" << endl;
    return 0;
}
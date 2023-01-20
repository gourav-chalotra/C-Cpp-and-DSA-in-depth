// 5. Define a class Date and write a program to Display Date and initialise date object using
// Constructors
#include <iostream>
using namespace std;
class Date
{
    int month, date, year;

public:
    Date(int d, int month, int year)
    {
        date = d;
        this->month = month;
        this->year = year;
    }
    void displayDate()
    {
        cout << date << "-" << month << "-" << year << endl;
    }
};
int main()
{
    Date d(19, 1, 2023);
    d.displayDate();
    return 0;
}
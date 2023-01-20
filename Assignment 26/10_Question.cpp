// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result
#include <iostream>
using namespace std;

class StaticCount
{
    static int num;

public:
    static void displayStatic()
    {
        num++;
        cout << num << endl;
    }
};
int StaticCount::num = 0;

int main()
{
    StaticCount e;
    e.displayStatic();
    e.displayStatic();
    e.displayStatic();
    return 0;
}
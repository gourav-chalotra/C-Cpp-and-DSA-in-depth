// 4. Define a class Counter and Write a program to Show Counter using Constructor.
#include <iostream>
using namespace std;

class Counter
{
    static int count;

public:
    Counter()
    {
        cout << count << endl;
        count++;
    }
};
int Counter::count = 0;
int main()
{
    Counter e1,e2,e3;
    return 0;
}
// 9. Write a C++ program to find the maximum of two numbers
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter two number's" << endl;
    cin >> x >> y;
    cout << endl;
    if (x > y)
        cout << x;
    else if (y > x)
        cout << y;
    else
        cout << y;

    return 0;
}
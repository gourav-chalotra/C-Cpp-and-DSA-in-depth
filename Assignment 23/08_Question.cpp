// 8. Write a C++ program to swap values of two int variables without using third variable
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter value x: ";
    cin >> x;
    cout << "Enter value y: ";
    cin >> y;
    cout << "\n\nx is: " << x;
    cout << "\ny is: " << y;
    x = x + y;
    y = x - y;
    x = x - y;

    cout << "\n\nAfter swap value: \nx is: " << x << "\ny is : " << y << endl;

    return 0;
}
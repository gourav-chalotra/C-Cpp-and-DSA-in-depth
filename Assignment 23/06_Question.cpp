// 6. Write a C++ program to calculate an average of 3 numbers.

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "-Enter 3 number-" << endl;
    cin >> x >> y >> z;

    cout << "The average of 3 number is: " << ((x + y + z) / 3) << endl;
    return 0;
}
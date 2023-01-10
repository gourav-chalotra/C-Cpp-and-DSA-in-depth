// 10. Write a C++ program to add all the numbers of an array of size 10
#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int i = 0, sum = 0;
    cout << "Enter 10 values: " << endl;
    while (i < 10)
    {
        cin >> arr[i];
        sum = sum + arr[i];
        i++;
    }

    cout << "The sum of 10 value's in array is: " << sum << endl;
    return 0;
}
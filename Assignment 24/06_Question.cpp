// 6. Define a function to swap data of two int variables using call by reference
#include <iostream>
using namespace std;

int swap(int *val_1, int *val_2)
{
    *val_1 = *val_1 + *val_2;
    *val_2 = *val_1 - *val_2;
    *val_1 = *val_1 - *val_2;
}
int main()
{
    int num1, num2;
    cout << "Enter x value: ";
    cin >> num1;
    cout << "Enter y value: ";
    cin >> num2;

    cout << "\nBefore" << endl;
    cout << "\nx: " << num1 << endl;
    cout << "y: " << num2 << endl;

    swap(num1, num2);


    cout << "\nAfter" << endl;
    cout << "\nx: " << num1 << endl;
    cout << "y: " << num2 << endl;
    return 0;
}
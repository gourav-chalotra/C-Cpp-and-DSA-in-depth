// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.

#include <iostream>
using namespace std;
void checkFabo(int num)
{
    int zero = 0, one = 1, current_val = -1;
    while (current_val < num)
    {
        current_val = zero + one;
        if (current_val == num)
        {
            cout << "Present in  Fibonacci series";
            break;
        }
        zero = one;
        one = current_val;
    }
    if (current_val > num)
    {
        cout << "Not present in  Fibonacci series";
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkFabo(num);
    return 0;
}
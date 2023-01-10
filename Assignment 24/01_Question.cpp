// 1. Define a function to check whether a given number is a Prime number or not.
#include <iostream>
using namespace std;

void checkPrime(int);

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    checkPrime(x);
    return 0;
}

void checkPrime(int n)
{
    int i = 2;
    for (i; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("it's not a prime number");
            break;
        }
    }
    if (i == n)
    {
        cout << "it's a prime number" << endl;
    }
}
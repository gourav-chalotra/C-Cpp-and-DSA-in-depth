// 3. Define a function to calculate x raised to the power y.
#include <iostream>
using namespace std;
int power(int x, int y)
{
    int i = 0, power_val = 1;
    while (i < y)
    {
        power_val = power_val * x;
        i++;
    }
    return power_val;
}
int main()
{
    int x, y;
    cout << "Enter a x: ";
    cin >> x;
    cout << "Enter power of y: ";
    cin >> y;

    int power_val = power(x, y);
    cout << "The power " << x << "^" << y << " is: " << power_val;
    return 0;
}
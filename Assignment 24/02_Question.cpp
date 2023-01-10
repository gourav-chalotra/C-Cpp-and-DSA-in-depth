// 2. Define a function to find the highest value digit in a given number.
#include <iostream>
using namespace std;
void highestDigit(int num)
{
    // Step 1:
    int max = 0;
    while (num)
    {
        // Step 2:
        int digit = num % 10;
        if (max < digit)
            max = digit;
        // step 3:
        num = num - digit;

        // step 4:
        num = num / 10;
    }
    cout << "The max digit in a number is: " << max << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    highestDigit(n);
    return 0;
}
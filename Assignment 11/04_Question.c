// 4. Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
int nextPrime(int num);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int nextPrimeNum = nextPrime(num);
    printf("The next prime number is: %d", nextPrimeNum);
    return 0;
}
int nextPrime(int num)
{
    while (num += 1)
    {
        int j;
        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                break;
            }
        }
        if (j == num)
        {
            return num;
        }
    }
}
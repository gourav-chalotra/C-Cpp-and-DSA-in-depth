// Write a function to check whether a given number is Prime or not.
#include <stdio.h>
int primeOrNot(int num)
{
    int i = 2;
    while (i < num / 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (primeOrNot(num))
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return 0;
}
// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
void allPrime(int num1, int num2);
int main()
{
    int num1, num2;
    printf("Enter the starting number: ");
    scanf("%d", &num1);

    printf("Enter the end number: ");
    scanf("%d", &num2);

    allPrime(num1, num2);
    return 0;
}
void allPrime(int num1, int num2)
{
    int check;
    for (int i = num1 + 1; i < num2; i++)
    {
        check = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            printf("%d ", i);
        }
    }
}
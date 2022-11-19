// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include <stdio.h>
void printAllPrimeFactors(int num)
{
    int check;
    for (int i = 2; i <= num; i)
    {
        if (num % i == 0)
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
                printf(" %d", i);
                num = num / i;
            }
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printAllPrimeFactors(num);
}
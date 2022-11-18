// 5. Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
void nPrimeNumber(int num)
{
    int i = 0;
    while (i < num)
    {
        for (int j = 2; j && i < num; j++)
        {
            int k;
            for (k = 2; k < j; k++)
            {
                if (j % k == 0)
                {
                    break;
                }
            }
            if (k == j)
            {
                printf("%d ", j);
                i++;
            }
        }
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    nPrimeNumber(num);
    return 0;
}
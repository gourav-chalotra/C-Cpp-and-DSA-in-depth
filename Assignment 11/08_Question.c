// 8. Write a function to print PASCAL Triangle. (TSRN)
//    1   
//   1 1  
//  1 2 1 
// 1 3 3 1

#include <stdio.h>
int facto(int n)
{
    int factoVal = 1;
    while (n >= 1)
    {
        factoVal = factoVal * n;
        n--;
    }
    return factoVal;
}
int comb(int n, int r)
{
    return facto(n) / (facto(r) * facto(n - r));
}
void printPASCAL(int n)
{
    int i, j, k, r;
    for (i = 1; i <= n; i++)
    {
        k = 1;
        r = 0;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - i + 1 && j <= n + i - 1 && k)
            {
                printf("%d", comb(i - 1, r));
                k = 0;
                r++;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
}

int main()
{

    int num;
    printf("Enter the value: ");
    scanf("%d", &num);
    printPASCAL(num);
    return 0;
}
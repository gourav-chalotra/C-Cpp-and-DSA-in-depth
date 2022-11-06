// 6. Write a program to print the first N even natural numbers

#include <stdio.h>
int main()
{
    int N, i = 1, j = 1;
    printf("Enter the value: ");
    scanf("%d",&N);
    
    while (i <= N)
    {
        if (j % 2 == 0)
        {
            printf(" %d ", j);
            i++;
        }
        j++;
    }
}
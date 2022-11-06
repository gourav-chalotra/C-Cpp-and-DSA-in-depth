// 7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number you want prime number between: ");
    scanf("%d%d",&n,&m);

    for(int i = n; i < m; i++)
    {
        int j = 2;
        for (j; j < i; j++)
        {
            if (i % j == 0)
            {
                break;;
            }
        }
        if(j == i)
        {
            printf(" %d ", i);
        }
    }
    return 0;
}
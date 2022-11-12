// print the following

#include<stdio.h>
int main()
{
    for (int i = 1; i <= 10/2; i++)
    {
        for (int j = 1; j <= 10 - i; j++)
        {
            if(j == i && j == 10 - i )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// print the following code
//  *
//  * *
//  *   *
//  *     *
//  * * * * *
#include<stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(j == i || j == 1 || i == 5)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}
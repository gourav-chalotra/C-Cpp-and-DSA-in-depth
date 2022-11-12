// print the following code
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5*2; j++)
        {
            if(j>=5-i && j< 5+i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
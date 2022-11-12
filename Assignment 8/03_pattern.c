// 3. Write a program to draw the following patterns:

// ******
// *****
// ****
// ***
// **
// *

#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    
    while (n)
    {
        for (int i = 0; i < n; i++)
        {

            printf( "*");
        }
        n--;
        printf("\n");
    }
}
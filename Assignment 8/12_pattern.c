// print the following
// ABCDCBA
//  ABCBA
//   ABA
//    A
#include <stdio.h>
int main()
{
    char c = 'A';
    for (int i = 1; i <= 4; i++)
    {
        c = 'A';
        for (int j = 1; j < 4*2 - i + 1; j++)
        {
            if(j >= i && j < 4)
            {
                printf("%c",c);
                c++;
            }
            else if(j >= 4)
            {
                printf("%c",c);
                c--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
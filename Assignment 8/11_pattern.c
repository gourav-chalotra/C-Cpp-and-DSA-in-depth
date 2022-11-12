// print the following code
//    A
//   ABA
//  ABDBA
// ABDEDBA

#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {
        char k = 'A' - 1;
        for (int j = 0; j <= 3 + i; j++)
        {
            if (j >= 3 - i)
            {
                if (j <= 3)
                {
                    k++;
                    printf("%c", k);
                }
                else
                {
                    k--;
                    printf("%c", k);
                }
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
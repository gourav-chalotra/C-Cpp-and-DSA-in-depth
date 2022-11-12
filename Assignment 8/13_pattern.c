// print the following

// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A

#include <stdio.h>
int main()
{
    char c = 'A';
    for (int i = 1; i <= 7; i++)
    {
        c = 'A';
        for (int j = 1; j <= 7 * 2 - 1; j++)
        {
            if (j == 7 - i + 1 || j == 7 + i - 1)
            {
                printf("%c", c);
            }
            else if (j <= 7 - i + 1)
            {
                printf("%c", c);
                c++;
            }
            else if (j > 7 + i - 1)
            {
                --c;
                printf("%c", c);
                        }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
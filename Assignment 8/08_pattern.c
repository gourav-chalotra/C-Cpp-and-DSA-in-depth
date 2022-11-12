// print the following code
//    1
//   121
//  12321
// 1234321

#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {
        int k = 0;
        for (int j = 0; j <= 3 + i; j++)
        {
            if (j >= 3 - i)
            {
                if (j <= 3)
                {
                    k++;
                    printf("%d", k);
                }
                else
                {
                    k--;
                    printf("%d", k);
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
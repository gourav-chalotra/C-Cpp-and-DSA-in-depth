// print the following
// 1234321
//  12321
//   121
//    1

#include <stdio.h>
int main()
{
    int n = 4;
    for (int i = 1; i <= 4; i++)
    {
        int l = 1;
        for (int j = 1; j < 4 * 2 - i + 1; j++)
        {
            if (j >= i && j < 4)
            {
                printf("%d", l);
                l++;
            }
            else if(j >= 4)
            {
                printf("%d",l);
                --l;
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
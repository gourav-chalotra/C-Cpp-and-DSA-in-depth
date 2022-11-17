// print the following
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int n = 1;
        for (int j = 1; j <= 4 * 2 - 1; j++)
        {
            if (j <= 4 - i + 1)
            {

                printf("%d", n);
                n++;
            }
            else if (n == 5)
            {
                n = n - 2;
                printf("%d", n);
            }
            else if (j >= 4 + i - 1)
            {
                n--;
                printf("%d", n);
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

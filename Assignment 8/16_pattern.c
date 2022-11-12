// print the following code
//       *
//     *   *
//   *       *
// * * * * * * *

#include <stdio.h>

int main()
{
    int n;
   scanf("%d",&n);

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j == n - i + 1 || j == n + i - 1)
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
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
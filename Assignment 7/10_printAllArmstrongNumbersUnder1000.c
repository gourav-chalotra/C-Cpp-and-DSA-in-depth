// 10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
#include<math.h>
int main()
{
    for (int i = 0; i < 1000; i++)
    {
        if (i < 10)
        {
            printf("%d ", i);
        }
        else
        {
            int n = i, count = 0;
            while (n)
            {
                int mode = n % 10;
                n = n - mode;
                n = n / 10;
                count++;
            }

            int sum = 0;
            n = i;
            while (n)
            {
                int mode = n % 10;
                n = n - mode;
                n = n / 10;
                sum = sum + pow(mode, count);
            }
            if (sum == i)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
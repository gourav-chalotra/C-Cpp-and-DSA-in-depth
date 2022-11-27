// 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int Arr[10], max1 = -1, max2 = -1;
    printf("Enter 10 value\n");
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &Arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (max1 < Arr[i])
        {
            max2 = max1;
            max1 = Arr[i];
        }
        else if (max2 < Arr[i])
        {
            max2 = Arr[i];
        }
    }

    printf("The secound max value is %d",max2);
    return 0;
}
// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the three values: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d", num1);
        }
        else
        {
            printf("%d", num3);
        }
    }
    else if(num2 > 3)
    {
        printf("%d",num2);
    }
    else
    {
        printf("%d",num3);
    }
    return 0;
}
// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int Arr[10] , i = 0,min = __INT_MAX__;
    printf("Enter the value: ");
    for (i ; i < 10; i++)
    {
        scanf("%d",&Arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if(min > Arr[i])
            min = Arr[i];
    }
    
    printf("The smallest value is %d\n",min);
}
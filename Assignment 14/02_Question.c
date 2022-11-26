// 2. Write a program to calculate the average of numbers stored in an array of size 10 Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10], sum = 0,avg;
    printf("Enter the 10 values: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        sum = sum + arr[j];
    }

    avg = sum / 10;
    printf("The avg is %d",avg);
    
    return 0;
}
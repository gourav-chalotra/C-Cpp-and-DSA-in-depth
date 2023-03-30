// 1. Write a program to calculate the sum of two matrices each of order 3x3
#include <stdio.h>
int main()
{
    int arr[3][3];
    int arr1[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    printf("\tFirst Matrix:\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("     %d  ", arr[i][j]);
        }
        printf("\n\n");
    }
    printf("\tSecound Matrix:\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("     %d  ", arr1[i][j]);
        }
        printf("\n\n");
    }
    printf("\tMatrix sum is: \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("     %d  ", arr[i][j] + arr1[i][j]);
        }
        printf("\n\n");
    }
}
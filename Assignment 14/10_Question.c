// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user
#include<stdio.h>
int main()
{
    int Arr[10],copyArr[10],j,i;
    printf("Enter the value: ");
    for (i = 0; i < 10; i++)
    {   
        scanf("%d",&Arr[i]);
    }
    for (j = 0; j < 10; j++)
    {
        copyArr[j] = Arr[j];
    }
    printf("The copy element arrays are\n");
    for (j = 0; j < 10; j++)
    {
        printf("%d ",copyArr[j]);
    }
    return 0;
}
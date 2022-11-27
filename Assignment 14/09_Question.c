// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include <stdio.h>
int main()
{

    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
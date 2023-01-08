// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.

#include <stdio.h>
void printArrRev(int *arr, int size)
{
    int *nthPtr = arr;
    nthPtr = nthPtr + (size-1);
    printf("The reverse arry is:\n");
    while (nthPtr>=arr)
    {
        printf("%d ",*nthPtr);
        nthPtr--;
    }
    
}
int main()
{
    int n;
    printf("Enter number of values you want to enter:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d values: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printArrRev(arr, n);
}
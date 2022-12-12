// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include <stdio.h>
void rotateArray(int *ptr, int n, int d)
{
    int sizeOfNewArr = n - d,i,j = 0;
    int copArr[sizeOfNewArr];

    for (i = 0; i < sizeOfNewArr; i++)
    {
        copArr[i] = ptr[i];
    }
    for (i = 0; i < n; i++)
    {
        if(i < sizeOfNewArr)
        {
            ptr[i] = ptr[sizeOfNewArr + i];
        }
        else
        {
            ptr[i]= copArr[j];
            j++;
        }
    }
}
int main()
{
    int arr[6] = {34, 23, 12, 4, 56, 2};
    int d;
    printf("Enter d: ");
    scanf("%d", &d);
    printf("Before rotating a array\n\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    rotateArray(arr, 6, d);
    printf("Before rotating a array\n\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
}
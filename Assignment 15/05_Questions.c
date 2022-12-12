// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
#include <stdio.h>

int adjacentDuplicate(int *ptr, int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        if (ptr[i] == ptr[i + 1])
        {
            return ptr[i];
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {3,56,3,1,1};
    int val = adjacentDuplicate(arr,5);
    switch (val)
    {
    case 0:
        printf("\n\nThere is not a adjacent Duplicate value in array\n\n");
        break;
    
    default:
        printf("\n\nThe adjacent duplicate value in array is: %d\n\n",val);
        break;
    }
}
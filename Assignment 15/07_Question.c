// 7. Write a function in C to count a total number of duplicate elements in an array.(Means
// elements that occurs 2 times in an array)

#include <stdio.h>
int countDuplicate(int *arr)
{

    int count = 0;
    int arrCop[10] = {0};
    int i = 0;
    while (i < 10)
    {
        arrCop[arr[i]]++;
        i++;
    }
    i = 0;
    while (i < 10)
    {
        if (arrCop[i] == 2)
        {
            printf("%d \n", i);
        }
        i++;
    }
}
int main()
{
    int arr[10] = {2, 1, 4, 5, 3, 1, 2, 3, 5, 6};
    countDuplicate(arr);
}
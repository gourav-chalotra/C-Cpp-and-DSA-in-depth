// 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int main()
{
    int row, colum;
    printf("Enter a number of rows: ");
    scanf("%d", &row);

    printf("Enter a number of colum: ");
    scanf("%d", &colum);

    int A[row][colum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    int maxNumberOfOnes = 0, rowIndex, count;
    for (int i = 0; i < row; i++)
    {
        count = 0;
        for (int j = 0; j < colum; j++)
        {
            if (A[i][j] == 1)
                count++;
        }
        if (maxNumberOfOnes < count)
        {
            maxNumberOfOnes = count;
            rowIndex = i;
        }
    }
    printf("The max number of one's in the matrix is at the index of %d row and the number of max 1s is : %d\n", rowIndex , maxNumberOfOnes);
}
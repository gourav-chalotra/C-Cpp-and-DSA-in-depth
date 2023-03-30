// 6. Write a program in C to find the sum of rows and columns of a Matrix
#include <stdio.h>
int main()
{
    int rows, colum, rowsSum = 0, columSum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of colum: ");
    scanf("%d", &colum);

    int A[rows][colum];
    printf("Enter %d number of elements: \n", rows * colum);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &A[i][j]);
        }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    // rows sum
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            rowsSum += A[i][j];
        }
    }
    for (int i = 0; i < colum; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            columSum += A[j][i];
        }
    }
    printf("colum sum is %d and row sum is %d\n", columSum, rowsSum);
}
// 5. Write a program in C to find the sum of left diagonals of a matrix.
#include <stdio.h>
int main()
{
    int rows, colum, sum = 0;
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter colum: ");
    scanf("%d", &colum);

    int A[rows][colum];
    printf("Enter %d elements: \n", rows * colum);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &A[i][j]);
        }

    // Left Diagonal sum of matrix
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < colum; j++)
        {
            if (j == colum - 1 - i)
            {
                sum += A[i][j];
                break;
            }
        }
    printf("Sum is: %d\n", sum);
    return 0;
}
// 4. Write a program in C to find the sum of right diagonals of a matrix.

#include <stdio.h>
int main()
{
    int rows, colum, sum = 0;
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter colum: ");
    scanf("%d", &colum);

    int A[rows][colum];
    printf("Enter %d elements: ", (rows * colum));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < colum; j++)
        {
            if (i == j)
            {
                sum += A[i][j];
            }
        }
    printf("Right Diagonal sum is: %d\n", sum);
    return 0;
}
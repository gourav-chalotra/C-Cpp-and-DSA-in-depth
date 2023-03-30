// 7. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>
int main()
{
    int row, colum;
    printf("Enter number of row you want: ");
    scanf("%d", &row);
    printf("Enter number of colum you want: ");
    scanf("%d", &colum);

    int A[row][colum];
    printf("Enter %d elements in Matrix\n", row * colum);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < colum; j++)
        {
            if (A[i][j] != 0)
            {
                printf("No it is not a lower triangular of a given matrix\n");
                return 0;
            }
        }
    }
    printf("Yes it is a lower triangular of a given matrix\n");
    return 0;
}
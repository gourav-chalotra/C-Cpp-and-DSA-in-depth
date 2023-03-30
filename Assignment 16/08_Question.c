// 8. Write a program in C to print or display an upper triangular matrix
#include <stdio.h>
int main()
{
    int row, colum;
    printf("Enter number of row: ");
    scanf("%d", &row);

    printf("Enter number of colum: ");
    scanf("%d", &colum);

    int A[row][colum];
    printf("Enter %d elements: \n",row*colum);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (A[i][j] != 0)
            {
                printf("Not a Upper triangular \n");
                return 0;
            }
        }
    }
    printf("It is a Upper triangular \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
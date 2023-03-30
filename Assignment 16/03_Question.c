#include <stdio.h>

int main()
{
    int rows,colum;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);
    printf("Enter the number of colum you want: ");
    scanf("%d",&colum);
    printf("Enter %dX%d matrix values: \n",rows,colum);
    int A[rows][colum], i, j, temp;
    for (i = 0; i < rows; i++)
        for (j = 0; j < colum; j++)
            scanf("%d", &A[i][j]);

    printf("\nBefore\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colum; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    printf("\nAfter\n");
    // transpose of given matrix
    for (i = 0; i < rows; i++)
        for (j = 0; j < colum; j++)
        {
            if (j > i)
            {
                temp = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = temp;
            }
        }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colum; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}
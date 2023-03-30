// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
// sparse meaning is :- If most of the elements of the matrix have 0 value, then it is called a sparse matrix.
#include <stdio.h>
int main()
{
    int row, colum;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of colum: ");
    scanf("%d", &colum);

    int A[row][colum];
    printf("Enter %d elements in matrix\n", row * colum);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    // checking the matrix is sparse matrix or not?
    int countZeros = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < colum ; j++)
        {
            if(A[i][j] == 0)
                countZeros++;
        }
    }
    (countZeros > (row*colum - countZeros))?printf("Yes it is a sparse matrix\n"):printf("It is not a sparse matrix\n");
    return 0;
}
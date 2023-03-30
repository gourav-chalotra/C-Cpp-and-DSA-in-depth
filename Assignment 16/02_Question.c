// 2. Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3];
    printf("Enter first matrices\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);
    printf("Enter second matrices\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    printf("First Matrices\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrices\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        // i = 1
        for (int j = 0; j < 3; j++)
        {
            // j = 1
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                // k = 2
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
    printf("C matrices\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
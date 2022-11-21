// 6. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void revFirstNNaturalNo(int n)
{
    printf("%d ", n * 2);
    if (n != 1)
        revFirstNNaturalNo(n - 1);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    revFirstNNaturalNo(num);
    return 0;
}
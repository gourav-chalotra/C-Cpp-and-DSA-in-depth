#include <stdio.h>
int main()
{
    int num, rotateValue;
    printf("Enter the number: ");
    scanf("%d", &num);

    int modulo = num % 10;
    int multiple = 1;
    int copyNum = num;
    while (copyNum)
    {
        multiple = multiple * 10;
        copyNum = copyNum / 10;
    }
    multiple/=10;
    rotateValue = multiple * modulo;
    printf("rotale %d\n", rotateValue);
    num -= modulo;
    num /= 10;
    printf("num: %d\n", num);
    rotateValue += num;

    printf("The rotate value is: %d\n", rotateValue);

    return 0;
}
// 5. Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter three digit number\n");
    scanf("%d", &num);

    while (num)
    {
        sum = sum + (num % 10);
        num /= 10;
    }

    printf("sum of digits is %d ", sum);
    return 0;
}
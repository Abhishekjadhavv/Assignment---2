// 4. Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>

int main()
{

    int x = 30, y = 50;
    printf("before swaping\n");
    printf("x = %d and y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swaping\n");
    printf("x = %d and y = %d\n", x, y);
    return 0;
}
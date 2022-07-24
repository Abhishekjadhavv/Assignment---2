// 9. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>

int main(){

    int a;
    char c;
    float f;
    double d;
    printf("size of variables are\n int %d bytes \n char %d byte \n float %d bytes\n double %d bytes\n",sizeof(a),sizeof(c),sizeof(f),sizeof(d));
    return 0;
}
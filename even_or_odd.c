// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator.

#include<stdio.h>

int main(){

    int num = 13;
    
    if(num & 1){
        printf("odd number");
    }else{
        printf("Even number");
    }
}
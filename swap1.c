// Write a program to swap values of two int variables
#include<stdio.h>
int main(){
  int x=10,y=20,z;
  printf("before swaping\n");
  printf("x = %d and y = %d \n",x,y);
  z = x;
  x = y;
  y = z;  
  printf("After Swaping\n");
  printf("x = %d and y = %d \n",x,y);
  return 0;
}
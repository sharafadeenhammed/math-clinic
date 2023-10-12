#include<stdio.h>


int main(){
  int a = 5;
  do{
    printf("current valuer of a is: %i \n", a);
    a -= 1;
  } while (a > 0);
}
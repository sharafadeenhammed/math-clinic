// #include<stdio.h>

int print(){
  printf("hello world");
}


int my_number(){
  int number = 0;
  printf("enter an integer value: ");
  scanf("%i", &number);
  return number;
}

int sum_integer(int a, int b){
  int sum = a + b;
  return sum;
}

float my_float(){
  return 10.5;
}

float sum_float(float a, float b){
  float sum = a + b;
  return sum;
}

int sum_user_input();

int get_user_input(){
  // A codeblock to get an integer value.
  int x = 0;
  printf("Enter an integer value: ");
  scanf("%i", &x);
  return x;
}

int sum_user_input(){
  int a = 0;
  int b = 0;
  printf("enter your first integer value: ");
  scanf("%i", &a);
  printf("\nenter your second integer value: ");
  scanf("%i", &b);
  return a + b;
}
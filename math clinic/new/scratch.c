#include<stdio.h>
#include<string.h>
void customStrCpy(char *variable, char *value){
  while (*value) {
    // printf("%c  ", *value);
    *variable = *value;
    value++;
    variable++;
  }
  *variable = *value;
}

int main (){
  char name[100] = "salam";
  customStrCpy(name, "addulsalam balogun");
  printf("\n\n%s", name);
  return 0;
}
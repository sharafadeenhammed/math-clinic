#include <string.h>
#include <stdio.h>

int main(){
  typedef char string [100];

  typedef struct 
  {
    int age;
    string name;
    string address;
  } person;

  person salam;
  person hammed;
  // salam info
  strcpy(salam.address, "No 10, monotan area, ibadan, oyo state.");
  strcpy(salam.name, "abdul salam");
  salam.age = 20;
  // hammed info
  strcpy(hammed.address, "No 10, oluseyi area, ibadan, oyo state.");
  strcpy(hammed.name, "abdul hammed");
  hammed.age = 30;
  // printing salam info
  printf("your name is %s he lives at %s and he is %i old" , salam.name, salam.address, salam.age);
  //printing hammed info
  printf("\n\nyour name is %s he lives at %s and he is %i old" , hammed.name, hammed.address, hammed.age);
}




#include <stdio.h>

int main(){
  double aura = 1000000000000000.00000000;

   printf("The memory address is: %f\n",aura);
   printf("The memory address is: %p\n",&aura);

}
/*
The memory address is: 1000000000000000.000000
The memory address is: 0x7ffc1e889b80
*/


//A pointer is a variable that stores the 
// memory address of another variable as its value.

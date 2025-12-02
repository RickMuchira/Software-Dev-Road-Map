#include <stdio.h>
int main(){
    int myAge = 21;
//You should also note that &myAge is often called a "pointer". A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format specifier
//p is for pointer
//& is for address of
    printf("%p\n",&myAge);
  //  let's print the memory address of each array element
  int myNumber[] ={1 ,2 ,3 ,4};
  int i;
  for (i = 4; i > 0; i--) {
  printf("%p\n", &myNumber[4]);
}
  
    return 0;
}
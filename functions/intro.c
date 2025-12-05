#include <stdio.h>

// Create a function
// void means this function doesn't return any value - it just performs actions
// If a function returns a value (like int, float, char), you'd use that type instead
void myFunction() {
    printf("I just got executed!\n");
  }
  
void calculateSum(){
    int x =5 ;
    int y =7 ;
    int sum = x+y;
printf("The total sum is %d\n", sum);
}

  int main() {
    myFunction(); // call the function
    myFunction(); // call the function
    myFunction(); // call the function
    calculateSum();






    return 0;
  }
/*the correct format to declare functions is 
1the function name (includes the name of fnction its parameters and datatype
eg.int myFunction(int x, int y);
2.the main function
// The main method
int main() {
  int result = myFunction(5, 3); // call the function
  printf("Result is = %d", result);
  return 0;
}
3. then the function decalration:code to be executed
// Function definition
int myFunction(int x, int y) {
  return x + y;
}
  */

  #include <stdio.h>
//NB:  if you try to call a function that has not been declared or defined  it wil cause an error eithere way
void myFunction();

int main(){
    myFunction();
    return 0;
}

void myFunction(){the program will have an error if y
 printf("FIrst we declare the function ,then move to main ,the define the function its a 3 step program\n");

}


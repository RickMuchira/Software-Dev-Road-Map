#include <stdio.h>
/*
myFunction() is the name of the function
void means that the function does not have a return value. You will learn more about return values later in the next chapter
Inside the function (the body), add code that defines what the function should do
*/
void myFyunction(){
  printf("RIck is Awesome");

}

void sum(){
int a =60;
int b =7;

int sum = a+ b;

printf("The sum of %d and %d is %d\n( six seven)", a ,b ,sum);

}

int main(){
  myFyunction();
  sum();
  return 0;
}
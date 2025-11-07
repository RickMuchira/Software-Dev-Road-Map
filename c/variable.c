#include <stdio.h>
int main(){
  int myInt=10;
  float myFloat=10.5;
  char myChar= 'a';//character must be in single quotes while string must be in double quotes
//string is a sequence of characters it is defined using double quotes it is %s for string
  char myString[]="hello world";//string must be in double quotes and array must be in square brackets for the string to be printed
  //when you use cins the values become constant and cannot be replicated
  const int minutesPerHour = 60;
  const int monthsInYear = 12;

  printf("%d\n",myInt);//forwars slash not backslash for n
  printf("%f\n",myFloat);
  printf("%c\n",myChar);
  printf("My character is %c and my integer is %d\n " ,myChar,myInt);
  printf("My string is %s\n" ,myString);
  printf("%d\n", minutesPerHour);
  printf("%d\n", monthsInYear);
  return 0;

}
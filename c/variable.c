#include <stdio.h>
int main(){
  int myInt=10;
  float myFloat=10.5;
  char myChar= 'a';//character must be in single quotes while string must be in double quotes

  printf("%d\n",myInt);//forwars slash not backslash for n
  printf("%f\n",myFloat);
  printf("%c\n",myChar);
  printf("My character is %c and my integer is %d " ,myChar,myInt);
  return 0;

}
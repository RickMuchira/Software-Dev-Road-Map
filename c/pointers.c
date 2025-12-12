#include <stdio.h>
//pointers allow direct manipulation of data in the memory
int main(){
 /* Create a pointer variable with the name ptr, that points to an int variable (myAge). Note that the type of the pointer has to match the type of the variable you're working with (int in our example).
 Use the & operator to store the memory address of the myAge variable, and assign it to the pointer.
 Now, ptr holds the value of myAge's memory address.*/
int age = 21;
int* ptr = &age;//// A pointer variable, with the name ptr, that stores the address of myAge

printf("%d\n",age);
printf("%p\n",&age);
//Referencing means making a pointer point to a variable and dereferencing is accessing the value of the variable that the pointer points to.
printf("%p\n",ptr);//Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%d\n",*ptr);// Dereference: Output the value of myAge with the pointer (43)


}
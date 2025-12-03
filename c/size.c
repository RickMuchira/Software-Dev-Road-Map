#include <stdio.h>

int main(){
    int myNum= 5;
    float myFloat= 35.6743;
    char myChar = 'R';
    char myString[]= "Awesomeness";
    double myDouble= 123.456789012345;

    printf("The size of myNUm is %zu bytes\n", sizeof(myNum));
    printf("The size of myfloat is %zu bytes\n", sizeof(myFloat));
    printf("The size of mychar is %zu bytes\n", sizeof(myChar));
    printf("The size of mystring is %zu bytes\n", sizeof(myString));
    printf("The size of mydouble is %zu bytes\n", sizeof(myDouble));
    return 0;

}
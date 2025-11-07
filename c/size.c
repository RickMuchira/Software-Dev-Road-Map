#include <stdio.h>
int main(){
    int myInt=10;
    float myFloat=10.5;
    double myDouble=10.59904390;
    char myChar='a';
    printf("The size of myInt is %zu bytes\n", sizeof(myInt));
    printf("The size of myFloat is %zu bytes\n", sizeof(myFloat));
    printf("The size of myDouble is %zu bytes\n", sizeof(myDouble));
    printf("The size of myChar is %zu bytes\n", sizeof(myChar));
    return 0;
}
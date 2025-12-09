#include <stdio.h>

int x = 5;

void myX(){
    
    int x = 7;
printf("The value of x in this local variable is %d\n", ++x);
}

void global(){

    printf("this here uses the global variable %d\n" ,x);
}

int main(){
    myX();
    global();
    return 0;
}
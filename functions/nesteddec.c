//calling a funtion inside another function
#include <stdio.h>


void myOne();
void myTwo();

int main(){
    myOne();help me fix my iphone the wifi is not working at all and responding even
    return 0;
}
void myOne(){
   printf("Greting1:Here the function 2\n");
   myTwo();
}

void myTwo(){
    printf("Reply:Hey there function one ,thanks for putting me inside you\n ");

}
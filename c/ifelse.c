#include <stdio.h>

int main(){
    int time = 11;
    if (time<10){
        printf("Good Morning");
    }else if (time<20) {
        printf("Good day");
    }else {
        printf("Good evening");
    }
    //or instead you can write it like this ternary operator kind of way
    //variable = (condition) ? expressionTrue : expressionFalse;
    //int time = 11;
    (time < 18) ? printf("Good day") : printf("Good Evening");
    return 0;
}
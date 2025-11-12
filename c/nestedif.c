#include <stdio.h>
#include <stdbool.h>
int main(){

    int age = 20;
    bool isCitizen = true;
//code to run if condition1 is true
    if (age >= 18) {
        printf("Old enough to vote.\n");
//code to run if both condition1 and condition2 are true
        if (isCitizen){
            printf("So you can vote\n");}
        else{
            printf("Must be a citizen to vote\n");
        }
     }
     else{
        printf("Not old enough to vote.\n");
     }
    return 0;
}
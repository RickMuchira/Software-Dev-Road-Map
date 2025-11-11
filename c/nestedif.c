//Nested if statements are useful when you need to test multiple conditions that depend on each other. For example, checking if a person is old enough to vote, and if they are a citizen:
#include <stdio.h>
#include <stdbool.h>
int main(){

    int age = 20;
    bool isCitizen = true;

    if (age >= 18) {
        printf("Old enough to vote.\n");

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
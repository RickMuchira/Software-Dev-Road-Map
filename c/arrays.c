#include <stdio.h>

int main(){

    int myArray[] ={24,30,36,72,79};
    myArray[0] = 33;//change an array element
    printf("%d\n",myArray[0]);
    //To get the size of an array, you can use the sizeof operator:
    double myValues[] = {1.1, 2.2, 3.3};
int length = sizeof(myValues) / sizeof(myValues[0]);

printf("%d", length);  // Prints 3


    return 0;
}
//The return value of a comparison is either 1 or 0, which means true (1) or false (0)
#include <stdio.h>

int main(){
    int age = 18;

    printf("%d\n", age>=18);//1
    printf("%d\n", age<18);//0
    printf("%d\n", age>18);//0
    printf("%d\n", age!=18);//0
    printf("%d\n", age==18);//1
    printf("%d\n", age<=18);//1
    return 0;
}
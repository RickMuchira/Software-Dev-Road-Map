//BODMAS
//C follows order of operations rules to decide which part to calculate first.
#include <stdio.h>

int main(){
    int result1 = 2+3*4;//14
    int result2 = (2+3)*4;//20

    printf("%d\n" ,result1);
    printf("%d\n" ,result2);

    return 0;
}
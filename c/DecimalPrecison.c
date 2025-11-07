#include <stdio.h>
int main(){
    float myFloat =3.5;
    double myDOuble = 4.59904390;
    //we use %f for float and %lf for double
    printf("My float is %f and my double is %lf" ,myFloat ,myDOuble);
    return 0;   
}
/*float vs. double

The precision of a floating point value indicates how many digits the value can have after the decimal point.
The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits. 
Therefore, it is often safer to use double for most calculations 
- but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).*/
//Assignment Operators
#include <stdio.h>
int main(){
    int savings = 100;
    int value = 20;
    int product = 5;
    int dividend = 100;
    int remainder = 17;

    // Basic assignment operator (=)
    printf("Initial savings: %d\n", savings);

    // Addition assignment operator (+=)
    savings += 50;
    printf("After savings += 50: %d\n", savings);

    // Subtraction assignment operator (-=)
    value -= 5;
    printf("After value -= 5: %d\n", value);

    // Multiplication assignment operator (*=)
    product *= 4;
    printf("After product *= 4: %d\n", product);

    // Division assignment operator (/=)
    dividend /= 2;
    printf("After dividend /= 2: %d\n", dividend);

    // Modulo assignment operator (%=)
    remainder %= 5;
    printf("After remainder %%= 5: %d\n", remainder);

    return 0;
}
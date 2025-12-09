#include <stdio.h>

int main() {
    // choose a time of day to test; change this value and re-run
    int time = 11;

    // 5 conditions to show how if / else if works with more branches
    // 1) before 6  -> "Early hours"
    // 2) before 12 -> "Morning"
    // 3) before 16 -> "Afternoon"
    // 4) before 20 -> "Evening"
    // 5) otherwise -> "Night"
    if (time < 6) {
        printf("Early hours\n");
    } else if (time < 12) {
        printf("Morning\n");
    } else if (time < 16) {
        printf("Afternoon\n");
    } else if (time < 20) {
        printf("Evening\n");
    } else {
        printf("Night\n");
    }

    // Same idea using a chained ternary expression.
    // variable = (condition) ? trueValue : falseValue;
    // Here we nest ternaries to cover 5 conditions; parentheses help readability.
    // NOTE: if/else is clearer for many branches, but this is how it looks.
    (time < 6)  ? printf("Early hours\n") :
    (time < 12) ? printf("Morning\n")     :
    (time < 16) ? printf("Afternoon\n")   :
    (time < 20) ? printf("Evening\n")     :
                  printf("Night\n");

    return 0;
}
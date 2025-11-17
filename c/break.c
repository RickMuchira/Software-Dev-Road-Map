// break and continue examples
// Purpose:
// - break: stop the loop completely
// - continue: skip the rest of this iteration and go to the next one

#include <stdio.h>

int main() {
    // -------------------------------
    // Example 1: break
    // -------------------------------
    // We want to print numbers from 1 upwards,
    // but stop when we reach 5.
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            // When i is 5, break stops the loop
            break;  // exits the for loop
        }
        printf("break example: i = %d\n", i);
    }
    // Output will be: 1, 2, 3, 4

    printf("\n");  // blank line between examples

    // -------------------------------
    // Example 2: continue
    // -------------------------------
    // We want to print numbers from 1 to 10,
    // but skip (not print) the number 5.
    int j;
    for (j = 1; j <= 10; j++) {
        if (j == 5) {
            // When j is 5, continue skips the rest of the loop body
            // and moves to the next number
            continue;  // go to next iteration
        }
        printf("continue example: j = %d\n", j);
    }
    // Output will be: 1, 2, 3, 4, 6, 7, 8, 9, 10 (5 is skipped)

    return 0;
}



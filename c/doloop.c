//do-while loop
/*do {
  // code block to be executed
} while (condition);*/

/*
Purpose: A do-while loop executes a block of code at least once, then repeats 
as long as a condition is true. It checks the condition AFTER executing the code.

Key Difference from while loop:
- while loop: Checks condition FIRST, then executes code (may never execute)
- do-while loop: Executes code FIRST, then checks condition (always executes at least once)
*/

#include <stdio.h>

int main(){

// Example: Count down from 3 to 0
int count = 3;

do {
    printf("%d\n", count);  // Print the current value
    --count;  // Decrement count by 1
} while(count >= 0);  // Check condition after executing code

return 0;
}


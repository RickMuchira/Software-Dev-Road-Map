#include <stdio.h>

int main(){

    int myNum;

    /* 
        Rules to follow when using scanf:
        
        1. The first argument is ALWAYS a "format string" in quotes.
           - It tells scanf what type of data to read.
           - Examples:
                "%d"  -> read an int
                "%f"  -> read a float
                "%c"  -> read a single character
                "%s"  -> read a string (word)

        2. The type in the format string MUST match the variable type.
           - If you use "%d", the variable must be int.
           - If you use "%f", the variable must be float (or double).

        3. For normal variables (not arrays), you MUST use & in front of the variable.
           - scanf("%d", &myNum);   // correct for int
           - scanf("%d", myNum);    // WRONG (missing &)

        4. Be careful with spaces and newlines in the format string.
           - A space character in the format string will skip any amount of whitespace
             in the input (spaces, tabs, newlines).
           - Example: scanf("%d %d", &a, &b); will read two integers separated by space/newline.

        5. For strings with "%s", scanf stops at the first whitespace.
           - It cannot read a full sentence with spaces.
           - Later you will learn safer functions (like fgets) for that.

        6. scanf returns how many values it successfully read.
           - You can check this to see if input was valid.
           - Example:
                if (scanf("%d", &myNum) != 1) {
                    // input was NOT a valid integer
                }
    */

    printf("Enter a number\n");

    scanf("%d" , &myNum);

    printf("Your number is %d\n", myNum);
    return 0;
}
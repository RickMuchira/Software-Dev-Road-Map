// C has many helper functions in <string.h> for working with character arrays.
#include <stdio.h>
#include <string.h>

int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // strlen returns the number of visible characters (stops before the '\0' terminator)
    printf("Length of alphabet: %zu\n", strlen(alphabet));

    // sizeof gives the total bytes reserved for the array, so it includes the '\0'
    printf("Size of alphabet array: %zu\n\n", sizeof(alphabet));

    // If we reserve more space than the string needs, sizeof shows the full buffer
    char alphabetBuffer[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("strlen(alphabetBuffer): %zu\n", strlen(alphabetBuffer)); // still 26 characters
    printf("sizeof(alphabetBuffer): %zu\n\n", sizeof(alphabetBuffer)); // 50 bytes reserved

    // concatenate or combine strings
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // strcat appends str2 onto the end of str1, storing the combined result in str1
    strcat(str1, str2);

    printf("After strcat: %s\n", str1);

    char str3[20] = "Hello World!";
    char str4[20];

    // strcpy copies the characters from the source (str3) into the destination (str4)
    strcpy(str4, str3);

    printf("After strcpy: %s\n", str4);

    return 0;
}
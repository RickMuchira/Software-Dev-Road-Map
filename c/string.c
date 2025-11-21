#include <stdio.h>

int main(){
    // Since strings are actually arrays in C, you can get any letter by using its index in [].

    char greetings[] = "Hello World"; // double quotes define the whole string (ends with an invisible '\0')

    printf("%c\n" ,greetings[0]); // prints only the first character, so we use %c ("c" for char)

    greetings[0] ='j';// use single quotes to change one character in the string
    
    printf("%s\n" ,greetings); // %s expects the address of a string (a char array), so this prints the whole word

    // loop thru a string and print each letter of "RICK" on its own line
    char name[] = "RICK";
    int i;// declare a loop counter

    for (i=0; i<4; i++){
        printf("%c\n" , name[i]); // %c prints the single character stored at name[i]
    }

    // Expected output:
    // H
    // jello World
    // R
    // I
    // C
    // K

    return 0;
}
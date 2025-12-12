// ============================================
// CHAR vs CHAR[] - A COMPLETE EXPLANATION
// ============================================
// This program demonstrates the difference between:
// 1. char (single character)
// 2. char[] (array of characters = string)
//
#include <stdio.h>

// ============================================
// EXAMPLE 1: SINGLE CHARACTER (char)
// ============================================
// A single 'char' can only hold ONE character
// Notice: single quotes 'A' for single character
void printSingleChar(char letter){
    printf("Single character: %c\n", letter);
    // %c is used to print a SINGLE character
}

// ============================================
// EXAMPLE 2: STRING/ARRAY OF CHARACTERS (char[])
// ============================================
// char[] can hold MULTIPLE characters (a string)
// Notice: double quotes "Hello" for strings
void printString(char text[]){
    printf("String: %s\n", text);
    // %s is used to print a STRING (multiple characters)
}

// ============================================
// EXAMPLE 3: HOW STRINGS ARE STORED IN MEMORY
// ============================================
// Let's see what's actually inside a string
void showStringDetails(char word[]){
    printf("\n--- Breaking down the string: %s ---\n", word);
    printf("Each character in the string:\n");
    
    // Loop through each character until we find '\0' (null terminator)
    int i = 0;
    while(word[i] != '\0'){  // '\0' marks the end of the string
        printf("  Index %d: '%c' (ASCII value: %d)\n", i, word[i], word[i]);
        i++;
    }
    printf("  Index %d: '\\0' (null terminator - marks end of string)\n", i);
    printf("Total length: %d characters\n", i);
}

int main(){
    printf("========================================\n");
    printf("UNDERSTANDING CHAR vs CHAR[]\n");
    printf("========================================\n\n");
    
    // ============================================
    // SINGLE CHARACTER EXAMPLE
    // ============================================
    printf("1. SINGLE CHARACTER (char):\n");
    char singleLetter = 'A';  // Single quotes = one character
    printSingleChar(singleLetter);
    printSingleChar('B');
    printSingleChar('!');
    printf("\n");
    
    // ============================================
    // STRING EXAMPLE
    // ============================================
    printf("2. STRING (char[]):\n");
    char greeting[] = "Hello";  // Double quotes = string (array of chars)
    printString(greeting);
    printString("World");
    printString("Liam");
    printf("\n");
    
    // ============================================
    // HOW STRINGS ARE STORED
    // ============================================
    printf("3. HOW STRINGS ARE STORED IN MEMORY:\n");
    showStringDetails("Liam");
    showStringDetails("Hi");
    
    // ============================================
    // KEY DIFFERENCES SUMMARY
    // ============================================
    printf("\n========================================\n");
    printf("KEY DIFFERENCES:\n");
    printf("========================================\n");
    printf("char letter = 'A';     -> Stores ONE character\n");
    printf("char name[] = \"Liam\";  -> Stores MULTIPLE characters (string)\n");
    printf("\n");
    printf("Single quotes 'A'   -> Use for single character\n");
    printf("Double quotes \"Hi\"   -> Use for strings\n");
    printf("\n");
    printf("Format specifiers:\n");
    printf("  %%c -> Print single character\n");
    printf("  %%s -> Print string (multiple characters)\n");
    
    return 0;
}




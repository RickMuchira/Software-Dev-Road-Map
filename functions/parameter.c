//Information can be passed to functions as a parameter. Parameters act as variables inside the function.

//returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
#include <stdio.h>

// ============================================
// UNDERSTANDING CHAR AND STRINGS IN C:
// ============================================
// 
// 1. WHAT IS 'char'?
//    - 'char' is a data type that stores a SINGLE character
//    - Example: char letter = 'A';  (stores one character 'A')
//
// 2. WHAT IS 'char name[]'?
//    - 'char name[]' is an ARRAY of characters (a string!)
//    - The [] brackets mean it's an array (collection) of characters
//    - In C, strings are just arrays of characters
//    - Example: char name[] = "Liam" creates an array: ['L','i','a','m','\0']
//               where '\0' is a special "null terminator" that marks the end
//
// 3. HOW STRINGS ARE STORED IN MEMORY:
//    - When you write "Liam", C automatically creates an array:
//      Index:  0    1    2    3    4
//      Value: 'L'  'i'  'a'  'm' '\0'
//    - The '\0' (null terminator) tells C where the string ends
//
// 4. THE LOGIC BEHIND THIS FUNCTION:
//    - When you call: myFunction("Liam")
//    - C passes the ENTIRE array of characters to the function
//    - Inside the function, 'name' becomes a pointer to that array
//    - printf("%s", name) prints all characters until it finds '\0'
//
// 5. WHY USE [] INSTEAD OF A NUMBER?
//    - char name[] means "an array of any size"
//    - C automatically figures out the size when you pass a string
//    - This is flexible - you can pass strings of different lengths!
//
void myFunction(char name[]){
    // The %s format specifier tells printf to print a STRING
    // It will print all characters in 'name' until it finds '\0'
    printf("Hello %s\n" , name);
}

//Calculate the Sum of Number
void sum(int x ,int y ){
    int sum = x+ y;
    printf("The sum of %d and %d is: %d\n ", x ,y ,sum);

}

// ============================================
// PASSING ARRAYS TO FUNCTIONS - EXPLANATION:
// ============================================
// The function (myArray) takes an array as its parameter (int myNumbers[5]), 
// and loops through the array elements with the for loop.
//
// When the function is called inside main(), we pass along the myNumbers array, 
// which outputs the array elements.
//
// IMPORTANT NOTE:
// - When you call the function, you only need to use the name of the array 
//   when passing it as an argument: myArray(myNumbers)
// - However, the full declaration of the array is needed in the function 
//   parameter: (int myNumbers[5])
void myArray(int myNumbers[5]){
    for(int i = 0 ;i<5 ;i++){
        printf("%d\n",myNumbers[i]);
    }
}
int main(){
    // ============================================
    // CALLING myFunction WITH STRING LITERALS:
    // ============================================
    // 
    // When you write "Liam" in quotes, C automatically:
    // 1. Creates a character array in memory: ['L','i','a','m','\0']
    // 2. Passes the address (location) of that array to myFunction
    // 3. Inside myFunction, 'name' points to that array
    //
    // The string "Liam" is called a "string literal" because
    // it's literally written in your code (not stored in a variable first)
    //
    myFunction("Liam");   // Passes the string "Liam" to myFunction
    myFunction("Jenny");  // Passes the string "Jenny" to myFunction
    
    sum(5,3);
    sum(4,4);
    // Create an array with 5 elements
    int myNumbers[5]={10,11,12,13,14};
    // Call the function - just pass the array name (no brackets or size!)
    myArray(myNumbers);
    return 0;
}
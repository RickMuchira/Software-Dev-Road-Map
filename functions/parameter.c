//Information can be passed to functions as a parameter. Parameters act as variables inside the function.

//returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
#include <stdio.h>
void myFunction(char name[]){
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
    myFunction("Liam");
    myFunction("Jenny");
    sum(5,3);
    sum(4,4);
    // Create an array with 5 elements
    int myNumbers[5]={10,11,12,13,14};
    // Call the function - just pass the array name (no brackets or size!)
    myArray(myNumbers);
    return 0;
}
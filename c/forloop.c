//the purpose of for loop is to loop through a block of code a specific number of times

#include <stdio.h>

int main(){
//print numbers from 0 to 4
int i;  // Declare loop counter variable

// for loop syntax: for(initialization; condition; increment)
for (i=0; i<5; i++){
    // i=0: Initialize i to 0 (runs once at the start)
    // i<5: Condition - loop continues while i is less than 5
    // i++: Increment - add 1 to i after each iteration
    
    printf("%d\n", i);  // Print the current value of i
    // Loop will execute 5 times: i=0, i=1, i=2, i=3, i=4
}

// Example 2: Calculate sum of numbers from 1 to 5
int sum = 0;  // Start with sum at 0
int num;

// for loop: num starts at 1, continues while num <= 5, adds 1 each time
for (num=1; num<=5; num++){
    // num=1: Start counting from 1
    // num<=5: Keep going until num reaches 5 (includes 5)
    // num++: Add 1 to num after each loop
    
    sum = sum + num;  // Add current num to sum
    // Loop runs: num=1 (sum=1), num=2 (sum=3), num=3 (sum=6), num=4 (sum=10), num=5 (sum=15)
}
printf("Sum is %d", sum);  // Prints: Sum is 15

//countdown 

int count;

for(num=5 ;num >= 0; num--){
    printf("Happy New Year %d\n" ,num);
}


return 0;

}
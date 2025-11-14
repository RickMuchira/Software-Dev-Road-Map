//while loop 
/*while (condition) {
  // code block to be executed
}*/

/*
Purpose: A while loop executes a block of code as long as a condition is true.
It checks the condition first, then executes the code if true, and repeats.
*/

/*
in this example the loop will run over and 
over again as long as the variable is less that 5
*/
#include <stdio.h>

int main(){


int num = 0;

while(num<5){  // Loop continues as long as num is less than 5
    printf("%d\n",num);  // Print the current value of num
    ++num;// Increment num by 1 (move to next number)
}

//this other example will be counting down from 3 to 0 and print happy new year
int count = 3;

while(count >= 0){  // Loop continues as long as count is greater than or equal to 0
    printf("%d HAPPY NEW YEAR\n", count);  // Print count value and message
    --count;  // Decrement count by 1 (count down)
}
return 0;
}
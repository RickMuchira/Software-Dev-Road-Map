#include <stdio.h>
int main(){
int i,j ;  // i for outer loop, j for inner loop

// OUTER LOOP: runs 2 times (i=1, then i=2)
for (i= 1; i<=2; ++i){
    // i=1: Start outer loop at 1
    // i<=2: Continue while i is 1 or 2
    // ++i: Add 1 to i after each outer loop iteration
    
    printf("Outer:%d\n", i);  // Prints current outer loop value
    
    // INNER LOOP: runs 3 times for EACH outer loop iteration
    for (j=1; j<=3; ++j){
        // j=1: Start inner loop at 1
        // j<=3: Continue while j is 1, 2, or 3
        // ++j: Add 1 to j after each inner loop iteration
        
        printf("Inner:%d\n", j);  // Prints current inner loop value
        printf("%d", i*j);  // Prints multiplication: outer value × inner value
        // Inner loop completes all 3 iterations before outer loop continues
    }
    // When inner loop finishes (j=1,2,3), outer loop moves to next iteration
    printf("\n");  // New line after each outer loop completes
}

// Execution order:
// Outer i=1: Inner j=1 (1*1=1), j=2 (1*2=2), j=3 (1*3=3)
// Outer i=2: Inner j=1 (2*1=2), j=2 (2*2=4), j=3 (2*3=6)

return 0;
}
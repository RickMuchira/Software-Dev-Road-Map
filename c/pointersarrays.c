//Ok, so what's the relationship between pointers and arrays? Well, in C, the name of an array, is actually a pointer to the first element of the array.

#include <stdio.h>

int main(){
   int myNum[5] = {25 ,50 ,75 ,100};
   int i;

   for(i=4;i>=0;i--){
    printf("%d\n",myNum[i]);
   };
    


}

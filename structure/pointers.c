/*You can use pointers with structs to make your code more efficient, 
especially when passing structs to functions or changing their values.
*/
#include <stdio.h>

struct Car{
int year;
char brand[30];
};

int main(){

    struct Car car ={2025,"Audi"};
    //declare a pointer
    struct Car *ptr =&car;
  // Access members using the -> operator

    printf("Year:%d\n",ptr->year);
    printf("Brand:%s\n",ptr->brand);

    return 0;

;}
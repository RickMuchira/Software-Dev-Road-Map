/*The typedef keyword lets you create a new name (an alias) for an existing type. This can make complex declarations easier to read, and your code easier to maintain.

For example, instead of always writing float, we can create a new type called Temperature to make the code clearer:*/

#include <stdio.h>

typedef float Temperature;

int main(){

    Temperature today = 25.5;
    Temperature tomorrow = 18.6;

    printf("Today temp %.1f degrees\n",today);//Today temp 25.5 degrees
    printf("Tomorrows temp %f degrees\n",tomorrow);//Tomorrows temp 18.600000 degrees


    return 0;
}
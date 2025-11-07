#include <stdio.h>
int main(){

    int totalItems =15;
    float costPerItem = 10.99;
    float totalCost;
    char currency = '$';
    totalCost=totalItems*costPerItem;
//the /n is inside the comments
    printf("The total items are %d\n", totalItems);
    printf("The cost per item is %f %c\n", costPerItem ,currency);
    printf("the total per item is %f%c\n",totalCost, currency);
    return 0;

}
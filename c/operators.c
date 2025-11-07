#include <stdio.h>

int main(){
int sum1 = 100 + 50;
int sum2 = sum1 +50;
int sum3 =sum1+sum2;

printf("%d\n" ,sum3);
printf("%d\n" ,sum1*sum2);
printf("%d\n" ,sum3-sum2);
printf("%d\n" ,sum3/sum2);//divison
printf("%d\n" ,sum3%sum1);//modulus remainder of the nmber
//The ++ operator increases a value by 1, while the -- operator decreases a value by 1:

int z = 5;
--z;
printf("%d\n" ,z);
++z;
printf("%d\n" ,z);

//Real Life Example: Counting People
int peopleInRoom = 0;

// 3 people enter
peopleInRoom++;
peopleInRoom++;
peopleInRoom++;

printf("%d\n", peopleInRoom); // 3

// 1 person leaves
peopleInRoom--;
printf("%d\n", peopleInRoom); // 2


return 0;

}
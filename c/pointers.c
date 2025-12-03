#include <stdio.h>
int main(){
    int myAge = 21;
//You should also note that &myAge is often called a "pointer". A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format specifier
//p is for pointer
//& is for address of
    printf("%p\n",&myAge);
  //  let's print the memory address of each array element
  int myNumber[] ={1 ,2 ,3 ,4};
  int i;
  for (i = 4; i > 0; i--) {
  printf("%p\n", &myNumber[4]);
}
int myNumbers[4] = {25, 50, 75, 100};
int n;

for (n = 0; n < 4; n++) {
   printf("%d\n", myNumbers[n]);
   //The memory address of the first element is the same as the name of the array:


   // Get the memory address of the first array element
   printf("%p\n", &myNumbers[n]);
   // Get the memory address of the myNumbers array
printf("%p\n", myNumbers);
   printf("%zu\n", sizeof(myNumbers));

}
//getting the value of the array element
int *ptr = myNumbers;
for (i = 0; i < 4; i++) {
    printf("%d\n", *(ptr + i));
  }
// Change the value of the first element to 13
*myNumbers = 13;

// Change the value of the second element to 17
*(myNumbers +1) = 17;

// Get the value of the first element
printf("%d\n", *myNumbers);

// Get the value of the second element
printf("%d\n", *(myNumbers + 1));

int *p = myNumbers;//point to number in [0]
printf("%d\n", *p);// will print number in arrray[0]
p++;
printf("%d\n", *p);// will print number in arrray[1]
p--;
printf("%d\n", *p);//will print number in arrray[0]
p+=2;
printf("%d\n", *p);//will print number in arrray[2]

int *end = &myNumbers[4];
int *start =&myNumbers[0];
//the purpose of %ld is to print the length of the array
//You can subtract two pointers that point to elements in the same array to find out how many elements are between them:
printf("%ld\n", end - start);// 3 elements apart

//pointer arithmetic
    return 0;
}
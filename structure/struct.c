#include <stdio.h>
//Structures (also called structs) are a way to group several related variables into one place.
#include <string.h>
//we have to include this to use strcopy 
struct myStructure{
    int myNum;
    char myChar;
    char myString[20];
};
//Use the struct keyword inside the main() method, followed by the name of the structure and then the name of the structure variable:


int main(){
      // Create a structure variable of myStructure called s1

    struct myStructure s1;

      // Assign values to members of s1
s1.myNum=67;
s1.myChar='R';
  // Assign a value to the string using the strcpy function
strcpy(s1.myString,"INVINCIBLE");

printf("tHE VALUE OF INTEGER IS %d\n",s1.myNum);
printf("tHE VALUE OF CHARACTER IS %c\n",s1.myNum);
printf("tHE VALUE OF STRING IS %s\n",s1.myString);

return 0;
}
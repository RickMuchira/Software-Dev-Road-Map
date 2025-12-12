//A union is similar to a struct in that it can store members of different data types.
/*In a struct, each member has its own memory.
In a union, all members share the same memory, which means you can only use one of the values at a time.
*/
//Important: Since all members share the same memory, changing one will affect the others. Only the last assigned member holds a valid value:

#include <stdio.h>
#include <string.h>
union myUnion{
    int myNum;
    char myChar;
    char myString[30];

};

int main(){
   
    union myUnion U1;
// Since this is the last value written to the union, myNum no longer holds [14] - its value is now invalid
    U1.myNum = 14;
    U1.myChar = 'R';
    strcpy(U1.myString,"MONALISA");
    
    printf("%d\n",U1.myNum);//This value is no longer reliable
    printf("%c\n",U1.myChar);//Prints 'R'
    printf("%s\n",U1.myString);//Prints 'R'


    return 0;
};
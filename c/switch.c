//the purpose of the switch statement is used to select one of many code blocks to be excecuted
//role of break in the switch blocj is it exists the switch block when a case is matched
#include <stdio.h>
int main(){

    int day = 4;

    switch(day) {
      case 1:
        printf("Monday");
        break;
      case 2:
        printf("Tuesday");
        break;
      case 3:
        printf("Wednesay");
        break;
       default://deafult is a keyword that run when there is no match
       printf("Looking forward for the weekend");
    
    }
    return 0;
}
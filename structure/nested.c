/*Here, the Car structure contains another structure (Owner) inside it. 
This makes it easy to organize complex data, for example, a car and its owner.
*/

#include <stdio.h>

struct Owner{
    char Firstname[30];
    char Lastname[30];
};

struct Car{
    char carname[30];
    int modelYear;
    struct Owner owner;//owner here is the variable name
};

int main(){
//assign values to that variable
struct Owner person = {"John","Doe"};
struct Car car1= {"AUDI", 2025 ,person};

printf("This %s belongs to %s %s it is a model from %d\n",car1.carname ,car1.owner.Firstname ,car1.owner.Lastname ,car1.modelYear);
printf("His name is :%s %s\n",person.Firstname ,person.Lastname);
return 0;

   

}
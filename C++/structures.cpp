//Structures (also called structs) are a way to group several related variables into one place.
//Each variable in the structure is known as a member of the structure.
//Unlike an array, a structure can contain many different data types: int, string, bool, etc.
#include <iostream>
using namespace std;

int main(){

    struct{
        int myNum;
        string myString;
    }myStructure;//After the declaration, specify the name of the structure variable (myStructure in the example below):
//Access Structure Members:To access members of a structure, use the dot syntax (.):
myStructure.myNum=1;
myStructure.myString="Rick";

cout<<myStructure.myNum<<endl;
cout<<myStructure.myString<<endl;

//ONE STRUCT IN MULTIPLE VARIABLES
struct{
    string brand;
    string model;
    int year;
}myCar1,myCar2;

myCar1.brand="Aston Martin";
myCar1.model="DB5";
myCar1.year=1965;

myCar2.brand="BMW";
myCar2.model="M5";
myCar2.year=2025;

cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
/*
Aston Martin DB5 1965
BMW M5 2025
*/
}




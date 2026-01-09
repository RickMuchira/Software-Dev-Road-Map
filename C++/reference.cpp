//A reference variable is an alias for an existing variable. It is created using the & operator:

#include <iostream>
using namespace std;

int main(){

    string food ="Pizza";
    string &meal= food;
//meal = "Burger"; // changes both meal and food

    cout<<food<<endl;
    cout<<meal<<endl;
    cout << &food<<endl; // Outputs 0x6dfed4//memory address of a variable; which is the location of where the variable is stored on the computer.

//pointers -A pointer however, is a variable that stores the memory address as its value.
int num = 15;
//created pointer variable with the name ptr that points to the food memory address
//Now, ptr holds the value of num's memory address.
int* ptr =&num;

cout<<ptr<<endl;
//deferencing
cout<<*ptr<<endl;




}
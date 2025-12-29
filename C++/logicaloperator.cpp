#include <iostream>

using namespace std;

int main(){

    int a = 30; 
    int b = 40 ;
    int c = 50 ;
//AND
    if(c>b && b>a){
        cout <<"Both conditions are met, it is true"<<endl;
    }
    //OR
    if(a>b || c>b){
        cout <<"one of the conditions are met, it is true"<<endl;
    }
    //NOT!
    if(!(a>b)){
        cout <<"The condition is been evereversed because of not descpite the condition is not meet"<<endl;
    }
/*
Both conditions are met, it is true
one of the conditions are met, it is true
The condition is been evereversed because of not descpite the condition is not meet
*/
}

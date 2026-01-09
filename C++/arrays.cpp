//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
#include <iostream>
using namespace std;

int main(){
    string cars[5]={"Bugatti","Bentley","BMW","BYC","Buick"};
    int i;
    for (i<0;i<5;i++){
        cout<<cars[i]<<endl;
    }
/*
Bugatti
Bentley
BMW
BYC
Buick
*/
    int num[5]={10,20,30,40,50};
    int j;
    for(j=0;j<=4;j++){
        cout<<num[j]<<endl;
    }
/*
10
20
30
40
50
*/

}
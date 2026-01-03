
/*The do/while loop always runs at least once, even if the condition is already false. 
This is different from a regular while loop, which would skip the loop entirely if the condition is false at the start.*/
#include <iostream>
using namespace std;

int main(){
    //print the value of i as long as i is less than 5
    int i = 0;
    do{
     cout<<"i is:"<<i<<endl;
     i++;   
    }
    while(i<5);
    /*i is:0
i is:1
i is:2
i is:3
i is:4*/

//what it the value does not meet the condition

int d =10;
do{
    cout<<"d is:"<<d<<endl;
    d++;
}
while(d<5);
}
//d is:10

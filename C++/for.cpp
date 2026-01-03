#include <iostream>

using namespace std;
//the purpose of for loop is to loop through a block of code a specific number of times

int main(){
    //after initializing the variable, setting a condition, and setting the increment/decrement
    for (int i=0; i<10; i++){
        cout <<"value is: "<<i<<endl;
    }

    //calculate the sum of numbers from 0 to 9
    int sum = 0;

    for (int i=0; i<10; i++){
        sum += i;
    }
    cout << "Final sum: " << sum << endl;
    return 0;
}
//while loop repeats a block of code as long as the condition remains true
#include <iostream>
using namespace std;

int main(){
    
    int i =-5;

    while(i<0){
        cout<<"The value of i is:"<<i<<endl;
        i++;

    }
    //happy new year countdown
    int countdown = 3;

    while(countdown > 0){//yo have to use comparison operators not assignment operators
        cout << countdown << endl;
        countdown--;    
        /*cout << "Happy New Year!" << endl;*///it will print this as part oof the loop as long as the condition reamins true

    }
    cout << "Happy New Year!" << endl;

}
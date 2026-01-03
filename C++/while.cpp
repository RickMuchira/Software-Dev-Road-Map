//while loop repeats a block of code as long as the condition remains true
#include <iostream>
#include <unistd.h>  // for sleep()
using namespace std;

int main(){
    
    int i =-5;

    while(i<0){
        cout<<"The value of i is:"<<i<<endl;
        sleep(1);  // Wait 1 second between each output
        i++;
        

    }
    //happy new year countdown
    int countdown = 3;

    while(countdown > 0){//yo have to use comparison operators not assignment operators
        cout << countdown << endl;
        sleep(1);  // Wait 1 second between each countdown number
        countdown--;    
        /*cout << "Happy New Year!" << endl;*///it will print this as part oof the loop as long as the condition reamins true

    }
    cout << "Happy New Year!" << endl;

}
/*
The value of i is:-5
The value of i is:-4
The value of i is:-3
The value of i is:-2
The value of i is:-1
3
2
1
Happy New Year!
*/
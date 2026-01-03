#include <iostream>

using namespace std;

int main(){
    //The "inner loop" will be executed one time for each iteration of the "outer loop":
for(int i=1; i<=3; i++){
    for (int j =1; j<=3; j++){
        cout<<i*j<<" ";//creates sapce between each prinetd number and the mltiplication sign is ot being printed becase it is an operator not an sting literal
    }
    cout<<endl;
}
}
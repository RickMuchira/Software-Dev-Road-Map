#include <iostream>

using namespace std;

int main(){

    int age ;
    bool citizen;

    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Are you a citizen? (1 for yes, 0 for no): ";
    cin >> citizen;

    if(age>=18){
        cout <<"Elligible to vote";

        if(citizen){
        cout<<"Can vote";
        }
        else{
        cout<<"Cannot vote";
        }
    }
    else{
        cout <<"cannot vote";
    }
}

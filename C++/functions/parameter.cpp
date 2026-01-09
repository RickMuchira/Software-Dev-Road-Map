#include <iostream>
using namespace std;

void myfuncton(string fname);

//you can set a default value and still later on 
void myCountry(string country = "Norway"){
    cout << country <<endl;
}
//multiple parameters

void personAge(string name ,int age){
    cout<<name <<" is " <<age <<" years old."<<endl;
}
int main(){
    //call the function
    personAge("Eric",21);
    personAge("Brian",23);
    myfuncton("James");
    myfuncton("Charles");
    myCountry("Kenya");
    myCountry();//this will print the defaut vaalue
    myCountry("Kuwait");
    return 0;
    return 0;
}
//add parameters inside parenthesis
void myfuncton(string fname){
    cout<<fname<<endl;

}


/*
Eric is 21 years old.
Brian is 23 years old.
James
Charles
Kenya
Norway
Kuwait
*/
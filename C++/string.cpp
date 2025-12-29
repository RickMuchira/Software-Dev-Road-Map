#include <iostream>
#include <string>

using namespace std;

int main(){

    string rick = "Rick Astley";
    string song = "Never Gonna Give You Up";

    cout<< "This Artist : " << rick << " sang the song " <<song <<endl;
//This Artist : Rick Astley sang the song Never Gonna Give You Up

//concatenate strings +
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << "Full Name: " << fullName << endl;
//Full Name: John Doe

//special characters (double ,single quote )
string vikings = "Great Nordic warriors where called \'Vikings\'";
string spartans = "Great Greek warriors where called \"Spartans\"";
//bacckslash 
string backslash = "Spartans \\Vikings";

cout << vikings <<endl;
cout << spartans <<endl;
cout << backslash <<endl;

string name;
cout << "Type your name: ";
cin >>name;
cout <<"Thankyou "<<name <<endl;


    return 0; 
}

//
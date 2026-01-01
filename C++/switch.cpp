#include <iostream>

using namespace std;


int main(){
   int day;
   cout << "Enter the number of that day you want to see:";
   cin >> day;

   switch(day){
    case 1:
      cout<<"Monday";
      break;
    case 2:
      cout<<"Tuesday";
      break;
    case 3:
      cout<<"Wednesday";
      break;
    case 4:
      cout<<"Thursday";
      break;
    case 5:
      cout<<"Friday";
      break;     
    case 6:
      cout<<"Saturday";
      break;
    case 7:
      cout<<"Sunday";
      break;
    default://default keyword if one of those cases are ment this is printed
      cout<<"Invalid day! Please enter a number between 1-7";
      break;
   }

}
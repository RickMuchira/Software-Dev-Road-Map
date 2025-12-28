//is a header file library that lets us work with input and output objects, such as cout
#include <iostream>
// means that we can use names for objects and variables from the standard library.
using namespace std;

int main() {
  //cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example, it will output "Hello World!".
  cout << "Hello World!\n\n";  // Added extra \n to skip a line
  cout << "Merry Christmas\n";
  cout << 6*7 << "\n";

  int myNum = 15;
  cout << myNum << "\n";

  int myAge = 21;
  cout << "I am " << myAge << " years old.\n";

  double temp = 22.5;
  cout << "Today's temp is " << temp << " degrees\n";

  //Declare Many Variables
  int x = 5, y = 9, z = 24;
  cout << "Sum of x, y, z: " << x + y + z << "\n";
  
  //One Value to Multiple Variables
  int a, b, c;
  a = b = c = 20;
  cout << a + b + c << "\n";

  //constant variable
  const int minutesPerHour = 60;
  /*
  const int minutesPerHour;
  minutesPerHour = 60; // error
  */
  cout << "Minutes per hour: " << minutesPerHour << "\n";
  return 0;
}
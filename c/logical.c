// Logical Operators in C
// This program demonstrates the three main logical operators: && (AND), || (OR), and ! (NOT)

#include <stdio.h>      // For printf function to display output
#include <stdbool.h>    // For bool data type (true/false values)

int main() {
  // Declare boolean variables to represent user states
  bool isLoggedIn = true;   // User is currently logged in
  bool isAdmin = false;      // User is not an administrator

  // Logical AND operator (&&)
  // Returns true only if BOTH conditions are true
  // isLoggedIn && !isAdmin means: user is logged in AND user is NOT an admin
  // Result: true && true = true (regular user who is logged in)
  // The ? : is a ternary operator: condition ? value_if_true : value_if_false
  printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");

  // Logical OR operator (||)
  // Returns true if AT LEAST ONE condition is true
  // isLoggedIn || isAdmin means: user is logged in OR user is an admin
  // Result: true || false = true (has access because logged in)
  printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");

  // Logical NOT operator (!)
  // Reverses the boolean value (true becomes false, false becomes true)
  // !isLoggedIn means: NOT logged in (opposite of isLoggedIn)
  // Result: !true = false (user IS logged in, so NOT logged in is false)
  printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");

  return 0;
}
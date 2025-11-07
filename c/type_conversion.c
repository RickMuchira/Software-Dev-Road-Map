#include <stdio.h>

int main() {
  // Implicit conversion (widening): int -> float happens automatically
  int a = 7;
  float b = a; // 'a' is promoted to float
  printf("Implicit int->float: a=%d, b=%.2f\n", a, b);

  // Implicit conversion in expressions: int + float -> float
  float c = 2.5f;
  float sum = a + c; // 'a' is promoted to float for the addition
  printf("Expression promotion (int + float): %d + %.2f = %.2f\n", a, c, sum);

  // Explicit conversion (narrowing): float -> int truncates fractional part
  float d = 9.99f;
  int e = (int)d; // cast drops the .99, not rounding, just truncation
  printf("Explicit cast float->int (truncation): d=%.2f, e=%d\n", d, e);

  // Division: int vs float
  int x = 5, y = 2;
  int intDiv = x / y;      // integer division: 5/2 = 2
  float floatDiv1 = x / y; // still integer division first, then assigned to float: 2.00
  float floatDiv2 = (float)x / y; // cast makes it floating-point division: 2.50
  printf("Division int/int -> int: %d / %d = %d\n", x, y, intDiv);
  printf("Assigned to float after int division: %d / %d = %.2f\n", x, y, floatDiv1);
  printf("Float division via cast: (float)%d / %d = %.2f\n", x, y, floatDiv2);

  // char to int and back
  char ch = 'A';
  int chCode = ch;       // implicit promotion to int gives ASCII code
  char nextCh = (char)(chCode + 1); // explicit cast back to char
  printf("char->int ASCII: '%c' -> %d, then back to char: '%c'\n", ch, chCode, nextCh);

  // Mixed arithmetic: beware of where you cast
  // Only the operand you cast (or earlier ones in the expression) affects the result type
  int m = 3, n = 4;
  float wrongAvg = (m + n) / 2;       // (m+n)=7 (int), 7/2=3 (int), assigned as 3.00
  float rightAvg = (m + n) / 2.0f;    // 2.0f makes division floating: 3.50
  float alsoRightAvg = ((float)m + n) / 2; // cast promotes before division: 3.50
  printf("Average wrong (int division): %.2f\n", wrongAvg);
  printf("Average right (float divisor): %.2f\n", rightAvg);
  printf("Average right (cast operand): %.2f\n", alsoRightAvg);

  return 0;
}


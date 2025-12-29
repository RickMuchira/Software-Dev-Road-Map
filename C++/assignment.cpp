#include <iostream>
using namespace std;

int main() {
    // Assignment Operators
    // Assignment operators are used to assign values to variables.
    
    // Basic assignment operator (=)
    int x = 10;
    cout << "x = " << x << endl;
    
    // Addition compound assignment operator (+=)
    x += 5; // same as x = x + 5
    cout << "After x += 5: " << x << endl;
    
    // Subtraction compound assignment operator (-=)
    x -= 3; // same as x = x - 3
    cout << "After x -= 3: " << x << endl;
    
    // Multiplication compound assignment operator (*=)
    x *= 2; // same as x = x * 2
    cout << "After x *= 2: " << x << endl;
    
    // Division compound assignment operator (/=)
    x /= 4; // same as x = x / 4
    cout << "After x /= 4: " << x << endl;
    
    // Modulus compound assignment operator (%=)
    x %= 3; // same as x = x % 3
    cout << "After x %= 3: " << x << endl;
    
    // Bitwise AND compound assignment operator (&=)
    int y = 12;
    y &= 7; // same as y = y & 7
    cout << "y &= 7: " << y << endl;
    
    // Bitwise OR compound assignment operator (|=)
    y |= 3; // same as y = y | 3
    cout << "y |= 3: " << y << endl;
    
    // Bitwise XOR compound assignment operator (^=)
    y ^= 5; // same as y = y ^ 5
    cout << "y ^= 5: " << y << endl;
    
    // Right shift compound assignment operator (>>=)
    int z = 16;
    z >>= 2; // same as z = z >> 2
    cout << "z >>= 2: " << z << endl;
    
    // Left shift compound assignment operator (<<=)
    z <<= 1; // same as z = z << 1
    cout << "z <<= 1: " << z << endl;
    
    return 0;
}
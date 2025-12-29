#include <iostream>
using namespace std;

int main() {
    int x = 5;
    
    // Assignment operators
    cout << "Initial value: x = " << x << endl;
    
    x += 3;  // x = x + 3
    cout << "After x += 3: " << x << endl;
    
    x -= 3;  // x = x - 3
    cout << "After x -= 3: " << x << endl;
    
    x *= 3;  // x = x * 3
    cout << "After x *= 3: " << x << endl;
    
    x /= 3;  // x = x / 3
    cout << "After x /= 3: " << x << endl;
    
    x %= 3;  // x = x % 3
    cout << "After x %= 3: " << x << endl;
    
    // Reset for bitwise operations
    x = 5;
    cout << "\nBitwise operations (x = 5):" << endl;
    
    x &= 3;  // x = x & 3
    cout << "After x &= 3: " << x << endl;
    
    x = 5;
    x |= 3;  // x = x | 3
    cout << "After x |= 3: " << x << endl;
    
    x = 5;
    x ^= 3;  // x = x ^ 3
    cout << "After x ^= 3: " << x << endl;
    
    x = 5;
    x >>= 1;  // x = x >> 1
    cout << "After x >>= 1: " << x << endl;
    
    x <<= 1;  // x = x << 1
    cout << "After x <<= 1: " << x << endl;
    
    return 0;
}
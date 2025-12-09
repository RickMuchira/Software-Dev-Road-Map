/*
An inline function is a small function that asks the compiler to insert its code directly where it is called, instead of jumping to it.

This can make short, frequently used functions a little faster, because it removes the small delay of a normal function call.
Inline functions are defined with the inline keyword.
They can make small, often-used functions faster.
The compiler decides whether to inline a function or not.
Mostly used for short, simple functions.
*/
#include <stdio.h>

// Use 'static inline' to keep the definition in this translation unit.
// Plain 'inline' alone needs a separate external definition, which caused
// the "undefined reference to `add`" linker error you saw.
static inline int add(int a, int b) {
    return a + b;
}

int main() {
    // Inline function works like a regular call here; the compiler may
    // replace it with the function body because it is small and simple.
    printf("%d", add(5, 3));
    return 0;
}
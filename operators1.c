// Bitwise NOT (~)
// Use: Inverts all the bits of the integer (one's complement).
// How it works: It changes all 1 bits to 0 and all 0 bits to 1. In C, this operation is equivalent to -n - 1 for a positive integer.
#include <stdio.h>

int main() {
    int a = 5;  // (0101 in binary)
    int result = ~a;  // Inverts all bits: (1010 in binary) = -6 (in two’s complement)
    
    printf("Result of ~a = %d\n", result);  // Output: -6
    return 0;
}

#include <stdio.h>

int main() {
    int a = 5;  // (0101 in binary)
    int b = 3;  // (0011 in binary)
    int result = a ^ b;  // (0110 in binary) = 6
    
    printf("Result of a ^ b = %d\nResult of b ^ a = %d", result,b^a);  // Output: 6
    return 0;
}


// Bitwise XOR (^)
// Use: Performs a bitwise XOR operation on each corresponding bit of two integers.
// How it works: The result is 1 if the corresponding bits are different; otherwise, the result is 0.
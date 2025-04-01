#include <stdio.h>

int main() {
    int a = 5;  // (0101 in binary)
    int result = a << 1;  // (1010 in binary) = 10
    
    printf("Result of a << 1 = %d\nResult of a<<4=%d", result,a<<4);  // Output: 10
    return 0;
}


//  Left Shift (<<)
// Use: Shifts the bits of the number to the left by the specified number of positions.
// How it works: Each left shift operation effectively multiplies the number by 2 for each shift.


// a << n

// Where:

// a is the number whose bits are to be shifted.
// n is the number of positions to shift the bits to the left.
// When you perform a left shift, each shift to the left by one position multiplies the number by 2.


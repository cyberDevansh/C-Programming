#include <stdio.h>

int main() {
    int a = 50;  // (0101 in binary)
    int result = a >> 1;  // (0010 in binary) = 2
    
    printf("Result of a >> 1 = %d\nResult of a>>4=%d", result,a>>4);  
    return 0;
}

// Right Shift (>>)
// Use: Shifts the bits of the number to the right by the specified number of positions.
// How it works: Each right shift operation effectively divides the number by 2 for each shift.


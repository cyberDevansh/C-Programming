// Logical Operators:
/*

&& (AND)
|| (OR)
! (NOT)


// Bitwise Operators:

& (Bitwise AND)
| (Bitwise OR)
^ (Bitwise XOR)
~ (Bitwise NOT)
<< (Left shift)
>> (Right shift)


Logical Operators: Operate on boolean values (true/false) and are used to evaluate logical expressions.
Bitwise Operators: Operate at the bit level on integers and manipulate individual bits.


*/
#include <stdio.h>

int main() {
    int a = 5;  // (0101 in binary)
    int b = 3;  // (0011 in binary)
    int result = a | b;  // (0111 in binary) = 7
    
    printf("Result of a | b = %d\nresult of b | a = %d", result,b|a);  // Output: 7
    return 0;
}

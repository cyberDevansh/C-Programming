#include <stdio.h>

void example(int a) {
    a = 10;  // This changes only the local copy (formal argument)
}

int main() {
    int num = 5;
    example(num);  // 'num' is the actual argument
    printf("num = %d\n", num);  // Output will be 5
    return 0;
}
/*

Call by Value
Actual Arguments: These are the real values or variables passed to the function when it is called.

Formal Arguments: These are the parameters defined in the function that receive the actual arguments.

Behavior: The function copies the actual arguments into the formal arguments. Changes to the formal arguments inside the function do not affect the actual arguments

*/


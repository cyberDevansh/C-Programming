#include <stdio.h>

void example(int *a) {
    *a = 10;  // This changes the value at the address (actual argument)
}

int main() {
    int num = 5;
    example(&num);  // '&num' passes the address of 'num' (actual argument)
    printf("num = %d\n", num);  // Output will be 10
    return 0;
}
/*

Call by Reference
Actual Arguments: These are the real variables passed to the function when it is called.

Formal Arguments: These are the parameters defined in the function that receive the addresses of the actual arguments.

Behavior: The function receives pointers to the actual arguments. Changes to the formal arguments inside the function directly affect the actual arguments because they reference the same memory location

*/
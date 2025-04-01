#include <stdio.h>

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return -1;  // Indicating a specific error
    }
    return a / b;
}

int main() {
    int result = divide(10, 0);

    if (result == -1) {
        printf("Division failed due to invalid input.\n");
        return -1;  // Indicating the error propagated to the main function
    }

    printf("Division result: %d\n", result);
    return 0;  // Indicating success
}

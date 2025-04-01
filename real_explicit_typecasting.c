#include <stdio.h>

int main() {
    int num1 = 10;
    float num2 = 13.5;

    // Explicit typecasting
    float result = (float)num1 + num2;

    printf("Result: %f\n", result);
    return 0;
}
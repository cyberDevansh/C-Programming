#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    int c = a + b;  // Semantic error: adding int and float without explicit type casting
    // it may lead to semantic error or may give acurate answers
    
    printf("c = %d\n", c);
    return 0;
}
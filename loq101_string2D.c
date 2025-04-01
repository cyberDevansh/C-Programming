#include <stdio.h>

int main() {
    // Declare a 2D array to store 4 strings, each with a maximum of 11 characters
    char str[4][12] = {"Hello", "World", "C", "Programming"};
    
    // Print all strings using a loop
    printf("Using 2D character array (char str[4][12]):\n");
    for (int i = 0; i < 4; i++) {
        printf("String %d: %s\n", i + 1, str[i]);
    }

    return 0;
}

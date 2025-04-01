#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ptr = malloc(sizeof(int) * 10); // Allocate memory for an array of 10 integers
    if (ptr == NULL) {
        // Memory allocation failed
        printf("Memory allocation failed\n");
        exit(1); // Abnormal termination
    }

    // Memory allocation succeeded
    // Use the allocated memory
    for (int i = 0; i < 10; i++) {
        ptr[i] = i;
    }

    // Successfully completed the program
    free(ptr); // Free the allocated memory
    exit(0); // Successful termination
}

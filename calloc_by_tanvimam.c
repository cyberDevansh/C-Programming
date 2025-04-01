#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory for an array of 5 integers
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print initialized values (all zeroes)
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // Free the allocated memory
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n = 5;

    // Allocate memory for 5 integers
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    // Resize the memory block to hold 10 integers
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    if (ptr == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    // Assign additional values
    for (int i = n; i < 10; i++) {
        ptr[i] = i + 1;
    }

    // Print values
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // Free the allocated memory
    return 0;
}

/*

Common Errors in Memory allocation (not only in the reallocation)
1.	Memory Leaks: Forgetting to free() allocated memory.
2.	void leak() {
3.	    int *ptr = malloc(100 * sizeof(int));
4.	    // Memory is never freed.
5.	}
6.	Dangling Pointers: Accessing memory after it has been freed.
7.	free(ptr);
8.	*ptr = 10; // Undefined behavior
9.	Double Free: Freeing the same memory block twice.
10.	free(ptr);
11.	free(ptr); // Undefined behavior
12.	Access Out-of-Bounds Memory: Reading/writing beyond allocated memory size.


*/

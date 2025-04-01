#include <stdio.h>
#include <stdlib.h>

// Global variable (Data Segment)
int global_var = 42;

void function() {
    // Local variable (Stack)
    int local_var = 10;
    
    // Dynamic allocation (Heap)
    int *dynamic_var = (int *)malloc(sizeof(int) * 10);
    if (dynamic_var == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    
    // Use the dynamically allocated memory
    for (int i = 0; i < 10; i++) {
        dynamic_var[i] = i;
    }
    
    // Free the dynamically allocated memory
    free(dynamic_var);
}

int main() {
    function();
    return 0;
}

/* here in this code 
-global_var is stored in the data segment.

-local_var is stored on the stack.

-dynamic_var points to memory allocated on the heap
*/
// Flexible Size: Unlike the stack, the heap doesn't follow a strict size limit and can grow and shrink as needed, limited only by the system's available memory.


/*
Definition: The stack is a region of memory that stores temporary variables created by each function (including function parameters, local variables, and return addresses).

LIFO Structure: It follows a Last-In-First-Out (LIFO) structure, meaning that the last piece of data placed on the stack is the first to be removed.

Automatic Management: Memory allocation and deallocation on the stack are managed automatically by the CPU as functions are called and return.

Scope and Lifetime: Variables on the stack only exist for the duration of the function in which they are created. Once the function returns, the stack memory used by the function is reclaimed
*/
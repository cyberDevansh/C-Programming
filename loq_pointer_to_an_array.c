#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int (*ptr)[3] = &arr;  // Pointer to the array

    printf("First element: %d\n", (*ptr)[0]);  // Access first element
    printf("Second element: %d\n", (*ptr)[1]); // Access second element

    return 0;
}
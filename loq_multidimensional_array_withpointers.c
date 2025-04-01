#include <stdio.h>
//multidimensional array with pointers
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3] = arr;  // Pointer to an array of 3 integers

    // Access elements using pointer
    printf("Element at [0][1]: %d\n", ptr[0][1]);  // Output: 2
    printf("Element at [1][2]: %d\n", ptr[1][2]);  // Output: 6

    return 0;
}

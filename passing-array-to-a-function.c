#include <stdio.h>

// Function to display array elements by passing the entire array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

// Function to display a single element by passing it by value
void displayElement(int element) {
    printf("Element: %d\n", element);
}

int main() {
    int marks[] = {55, 60, 80, 70, 90, 100, 85};
    int size = sizeof(marks) / sizeof(marks[0]);

    printf("Displaying entire array:\n");
    displayArray(marks, size);

    printf("\nDisplaying individual elements:\n");
    for (int i = 0; i < size; i++) {
        displayElement(marks[i]);
    }

    return 0;
}

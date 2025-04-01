#include <stdio.h>

// Function declarations
void display1(int);
void display2(int);
void callFunctionsOnArray(int[], int, void (*)(int));

int main() {
    int marks[] = {55, 60, 80, 70, 90, 100, 85};
    int size = sizeof(marks) / sizeof(marks[0]);

    printf("Calling display1 on array elements:\n");
    callFunctionsOnArray(marks, size, display1);

    printf("\nCalling display2 on array elements:\n");
    callFunctionsOnArray(marks, size, display2);

    return 0;
}

// Function definitions
void display1(int m) {
    printf("Display1: %d\n", m);
}

void display2(int m) {
    printf("Display2: %d\n", m);
}

// Function to call a function on each array element
void callFunctionsOnArray(int arr[], int size, void (*func)(int)) {
    for (int i = 0; i < size; i++) {
        func(arr[i]);
    }
}

#include <stdio.h>
#include <conio.h>

// Define a struct to hold two integers
typedef struct {
    int num1;
    int num2;
} Pair;

// Function to swap two numbers and return them in a struct
Pair swap(int num1, int num2) {
    Pair result;
    result.num1 = num2;
    result.num2 = num1;
    return result;
}

int main() {
    int numb1, numb2;
    Pair swapped;

    // Prompting user to input the numbers
    printf("Enter number1: ");
    scanf("%d", &numb1);
    printf("Enter number2: ");
    scanf("%d", &numb2);

    // Function call to swap the numbers
    swapped = swap(numb1, numb2);

    // Displaying the values after swapping
    printf("After swapping:\nnum1 = %d\nnum2 = %d\n", swapped.num1, swapped.num2);

    getch();
    return 0;
}

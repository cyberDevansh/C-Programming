#include <stdio.h>
#include <conio.h>

// Define a union
union Data {
    int i;
    float f;
};

int main() {
    union Data data;
    int choice;
    
    printf("Choose data type to input (1 for int, 2 for float): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Input and print integer value
        printf("Enter an integer: ");
        scanf("%d", &data.i);
        printf("data.i = %d\n", data.i);
    } else if (choice == 2) {
        // Input and print float value
        printf("Enter a float: ");
        scanf("%f", &data.f);
        printf("data.f = %f\n", data.f);
    } else {
        printf("Invalid choice.\n");
    }

    // Demonstrate overwriting by using both types
    printf("\nDemonstrating overwriting:\n");

    // Assign and print integer value
    printf("Enter an integer: ");
    scanf("%d", &data.i);
    printf("data.i = %d\n", data.i);

    // Assign and print float value
    printf("Enter a float: ");
    scanf("%f", &data.f);
    printf("data.f = %f\n", data.f);

    // Print integer value again (likely invalid)
    printf("data.i (after assigning float) = %d\n", data.i);

    getch();
    return 0;
}

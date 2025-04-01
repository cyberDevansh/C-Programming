#include <stdio.h>
#include <string.h>

union stud {
    char name[20];
    int roll_no;
    float percentage;
};

int main() {
    union stud info;

    // Storing and printing the name
    strncpy(info.name, "Gopalji Devansh", sizeof(info.name) - 1);  //using strncpy instead of strcpy Usage: char *strncpy(char *dest, const char *src, size_t n);
    info.name[sizeof(info.name) - 1] = '\0'; // Ensure null-termination
    printf("Your name: %s\n", info.name);

    // Storing and printing the roll number (overwrites name)
    info.roll_no = 108;
    printf("\nRoll number: %d\n", info.roll_no);

    // Storing and printing the percentage (overwrites roll number)
    info.percentage = 92.6;
    printf("\nPercentage: %.2f\n", info.percentage);

    // Demonstrating that only one member of the union can hold a value at a time
    printf("\nAt last value stored by memory:\n");
    printf("Name (garbage): %s\n", info.name);
    printf("Roll number (garbage): %d\n", info.roll_no);
    printf("Percentage (actual): %.2f\n", info.percentage);

    return 0;
}

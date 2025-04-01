#include <stdio.h>
#include <conio.h>

// Define a union
union student {
    char name[20];
    int roll_number;
};

int main() {
    union student data;

    // Input and print name
    printf("Enter the name of student: ");
    scanf("%s", data.name);
    printf("Name = %s\n", data.name);

    // Input and print roll number (overwriting name)
    printf("Enter the student roll number: ");
    scanf("%d", &data.roll_number);
    printf("Roll number = %d\n", data.roll_number);

    // Attempt to print name again (showing it has been overwritten)
    printf("Name (after entering roll number) = %s\n", data.name);  // This will likely show corrupted data

    getch();
    return 0;
}

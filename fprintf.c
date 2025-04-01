#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");  // Open the file for writing
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Writing formatted data to the file
    int age = 25;
    const char *name = "Gopalji";
    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file);  // Close the file
    return 0;
}

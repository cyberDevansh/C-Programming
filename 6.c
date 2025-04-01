#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char name[] = "John";
    int age = 25;

    fprintf(fp, "Name: %s, Age: %d\n", name, age); // Write to the file
    printf("Data written to file.\n");

    fclose(fp);
    return 0;
}

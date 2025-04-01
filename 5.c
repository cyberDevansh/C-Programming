#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("text2.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int age;
    char name[50];

    if (fscanf(fp, "%s %d", name, &age) != 2) {
        fprintf(stderr, "Error reading from file\n");
        fclose(fp);
        return 1;
    }

    printf("Name: %s, Age: %d\n", name, age);

    if (fclose(fp) != 0) {
        fprintf(stderr, "Error closing file\n");
        return 1;
    }

    return 0;
}#include <stdio.h>

int main() {
    FILE *fp = fopen("text2.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int age;
    char name[50];

    fscanf(fp, "%s %d", name, &age); // Read a name and age from the file
    printf("Name: %s, Age: %d\n", name, age);

    fclose(fp);
    return 0;
}

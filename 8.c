#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Attempt to read past the end of the file
    while (fgetc(fp) != EOF); // Keep reading until EOF

    if (ferror(fp)) {
        printf("An error occurred while reading the file.\n");
    } else {
        printf("No error occurred.\n");
    }

    fclose(fp);
    return 0;
}

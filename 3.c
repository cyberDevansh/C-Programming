#include <stdio.h>

int main() {
    FILE *fp = fopen("example_text.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char c = 'A';
    putc(c, fp); // Write character to file
    printf("Character '%c' written to file.\n", c);

    fclose(fp);
    return 0;
}

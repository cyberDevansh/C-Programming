#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    if (feof(fp)) {
        printf("\nEnd of file reached.\n");
    }

    fclose(fp);
    return 0;
}
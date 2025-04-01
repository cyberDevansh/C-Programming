#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line of text
    printf("You entered: %s", str);

    return 0;
}

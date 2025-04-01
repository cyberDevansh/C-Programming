#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    c = getchar();  // Reads one character
    printf("You entered: %c\n", c);
    printf("You entered: %c\n", c+2);
    // getchar 
    return 0;
}

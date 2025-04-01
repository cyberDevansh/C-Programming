#include <stdio.h>

int main() {
    int condition = 1;  // Suppose this represents some error condition

    if (condition) {
        printf("General error occurred.\n");
        return 1;  // Indicating a general error
    }

    printf("Program executed successfully!\n");
    return 0;
}

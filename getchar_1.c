#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    c = getchar();  
    while (getchar() != '\n');  // Clears the buffer
    printf("You entered: %c\n", c);        // the return type of getchar is integer 
    printf("You entered: %c\n", c+1);
    return 0;
}

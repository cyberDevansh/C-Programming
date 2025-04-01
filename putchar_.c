// #include <stdio.h>

// int main() {
//     char ch = 'A';

//     // Using putchar to display a character
//     putchar(ch);
//     putchar('\n'); // Adds a new line for better readability

//     return 0;
// }

#include <stdio.h>

int main() {
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        putchar(ch); // Print each letter from A to Z
        putchar(' '); // Add a space between letters
    }
    putchar('\n');

    return 0;
}

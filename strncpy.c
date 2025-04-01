#include <stdio.h>

// Custom implementation of strncpy inside main
int main() {
    // Function to copy up to n characters from src to dest
    char *my_strncpy(char *dest, const char *src, int n) 
    {
        int i;

        // Copy up to n characters from src to dest
        for (i = 0; i < n && src[i] != '\0'; i++) {
            dest[i] = src[i];
        }

        // If src is shorter than n, pad with null characters
        for (; i < n; i++) {
            dest[i] = '\0';
        }

        return dest;
    }

    char src[] = "Hello, World!";
    char dest[20];

    // Use custom strncpy function
    my_strncpy(dest, src, 5);

    // Ensure null termination
    dest[5] = '\0';

    printf("Source: %s\n", src);
    printf("Destination (first 5 characters): %s\n", dest);

    return 0;
}

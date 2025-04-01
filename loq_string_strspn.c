#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcdef12345";
   char str2[] = "abcdef";

//The strspn function in C can be read as "string span." It calculates the length of the initial segment of a string (str1) that consists only of characters from another string (str2).
    // Calculate the length of the initial segment of str1
     int length = strspn(str1, str2);

    printf("The length of the initial segment of '%s' that contains only characters from '%s' is: %d\n", str1, str2, length);

    return 0;
}

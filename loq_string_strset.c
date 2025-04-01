#include <stdio.h>
#include <string.h> 

int main() {
    char str[] = "Hello, World!";
    strset(str, '*');  // Set all characters in str to '*'
    printf("%s\n", str);  
    return 0;
}

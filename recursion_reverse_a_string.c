#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end) {
    if (start >= end) {
        return;
    }
    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursive call for the remaining string
    reverse(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    reverse(str, 0, strlen(str) - 1);
    
    printf("Reversed string is: %s\n", str);
    
    return 0;
}

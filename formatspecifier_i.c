#include <stdio.h>
int main() {
    int num;

    printf("Enter a number (e.g., 42, 042, 0x2A): ");
    scanf("%d", &num);
    printf("Using %%d: %d\n", num);

  
    printf("Enter the same number again: ");
    scanf("%i", &num);
    printf("Using %%i: %d\n", num);

    return 0;
}


/*

Input: 42 → Both %d and %i treat it as decimal 42.
Input: 042 →
%d interprets as 42.
%i interprets as octal 34.
Input: 0x2A →
%d results in an error or undefined behavior.
%i interprets as hexadecimal 42.

*/
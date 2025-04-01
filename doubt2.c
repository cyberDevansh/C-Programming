#include <stdio.h>
#include <conio.h>
#include <string.h>

// Define a structure to store different types of data
struct data {
    long int i;
    float j;
    char str[20];
};

int main() {
    struct data info;
    printf("Enter the name: ");
//     scanf("%s", info.str);
gets(info.str);
    printf("Enter roll number: ");
    scanf("%ld", &info.i);
    printf("Enter the marks: ");
    scanf("%f", &info.j);
    printf("You entered:\nNAME: %s\nROLL NUMBER: %ld\nMARKS: %.2f\n", info.str, info.i, info.j);
getch();
    return 0;
}

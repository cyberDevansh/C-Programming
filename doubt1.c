#include <stdio.h>
#include <string.h>

// Define a union to store different types of data
union data {
    long int i;
    float j;
    char str[20];
};

int main() {
    union data info;
    printf("Enter the name: ");
    scanf("%s", &info.str);
    printf("You entered NAME: %s\n", info.str);// why & i snot used in scanning string name 
    printf("Enter roll number: ");
    scanf("%ld", &info.i);
    printf("You entered ROLL NUMBER: %ld\n", info.i);
    printf("Enter the marks: ");
    scanf("%f", &info.j);
    printf("You entered MARKS: %.2f\n", info.j);

    return 0;
}

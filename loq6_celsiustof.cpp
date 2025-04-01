#include <stdio.h>
#include <conio.h>
int main()
{ // celsius to farenheit
    float f,c;
    // f = (c * 9 / 5) + 32;
    printf("enter the celsius value:");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("farenheit value is : %f", f);

    getch();
    return 0;
}
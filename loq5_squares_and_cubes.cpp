#include <stdio.h>
#include <conio.h>
int main()
{ // squares and cubes from 1to 10
    int i;
    printf("number\tsquare\tcube\n");
    for (int i = 1; i <= 10; i++)
        printf("%d\t %d\t %d\n", i, i * i, i * i * i);
    getch();
    return 0;
}
#include <stdio.h>

int swap(int a) {
    return a;   //confusion is here that what is this and what it will return and how it runs 
}

int main() {
    int x = 5;
    int y = 10;
    int temp;

    temp = swap(x);  
    x = swap(y);     
    y = temp;       

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

#include <stdio.h>
#include <conio.h>

// Function to return the value passed to it
int swap(int num1) {
    return num1;
}

int main() {
    int numb1, numb2, temp;

    printf("Enter number1: ");
    scanf("%d", &numb1);
    printf("Enter number2: ");
    scanf("%d", &numb2);


    printf("Before swapping:\nnum1 = %d\nnum2 = %d\n", numb1, numb2);


    temp = swap(numb1);  
    numb1 = swap(numb2); 
    numb2 = temp;      

 
    printf("After swapping:\nnum1 = %d\nnum2 = %d\n", numb1, numb2);

    getch();
    return 0;
}

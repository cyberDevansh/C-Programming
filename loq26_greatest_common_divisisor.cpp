#include <stdio.h>
#include <conio.h>

int main()
{
    // GREATEST COMMON DIVISOR
// if we input 12 ad 8 then how it goes in remainder step
// Since 8 is less than 12, 8 % 12 is simply 8
//clrscr();
    int num1, num2;
    printf("enter two integers separated by space:");
    scanf("%d %d", &num1, &num2);
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    printf("greatest common divisor is %d\n", num1);
    getch();
    return 0;
}
// (If you input 48 and 18, the program will execute as follows:

// num1 = 48, num2 = 18

// temp = 18

// num2 = 48 % 18 = 12

// num1 = 18

// temp = 12

// num2 = 18 % 12 = 6

// num1 = 12

// temp = 6

// num2 = 12 % 6 = 0

// The loop ends, and num1, which is now 6, is the GCD)


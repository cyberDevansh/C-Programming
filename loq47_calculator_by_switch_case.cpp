#include <stdio.h>
#include <conio.h>
int main()
{
    // using switch case statement to build simple calculator
    int num1, num2, operation;
    printf("enter number1(integer):");
    scanf("%d", &num1);
    printf("enter number2(integer):");
    scanf("%d", &num2);
    printf("input\n(1 to add,2 to subtract,3 to multiply,4 to divide,5 to find remainder\n");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("addtion:\n%d + %d=%d", num1, num2, num1 + num2);
        break;
    case 2:
        printf("subtract:\n%d -%d=%d", num1, num2, num1 - num2);
        break;
    case 3:
        printf("multiplication:\n%d*%d=%d", num1, num2, num1 * num2);
        break;
    case 4:
        printf("division:\n%d/%d=%.3f", num1, num2, (float)num1 / num2);
        break;
    case 5:
        printf("remainder:\n%d %% %d=%d", num1, num2, num1 % num2);
        break;
    default:
        printf("invalid input");
        break;
    }

    getch();
    return 0;
}
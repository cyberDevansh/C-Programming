#include <stdio.h>
#include <conio.h>
int swap(int num1,int num2)
{
     int temp;
    printf(" before swapping\nnum1=%d\nnum2=%d",num1,num2);
     temp=num1;
     num1=num2;
     num2=temp;
     printf("\nafter swapping\nnum1=%d\nnum2=%d");

     return 0;
}
int main()
{
 
//clrscr();
swap(5,6);
 
getch();
return 0;
}
/*also a correct method 

#include <stdio.h>

int num1, num2;

void swap() {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    
    printf("Before swapping\nnum1 = %d\nnum2 = %d\n", num1, num2);

   
    swap();

  
    printf("After swapping\nnum1 = %d\nnum2 = %d\n", num1, num2);

    return 0;
}


*/
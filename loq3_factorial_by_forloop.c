#include <stdio.h>
#include <conio.h>
int main()
{ // factorial of a number
   int a;
   int b=1;
   printf("enter a number=");
   scanf("%d",&a);
   for(int i=1;i<=a;i++)
    
        b = b*i;
    
      
   printf("factorial(or say %d!) =%d",a,b);
    getch();
    return 0;
}
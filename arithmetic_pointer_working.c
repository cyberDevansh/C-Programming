#include <stdio.h>
#include <conio.h>
int main()
{

     // clrscr();
     int x = 5, *pi = &x;
     float b = 2.5, *pf = &b;
     char c = 'z', *pc = &c;

     printf("Value of pi = Address of a = %u\n", pi);
     printf("Value of pf = Address of b = %u\n", pf);
     printf("Value of pc = Address of c = %u\n", pc);

     pi++;
     pf++;
     pc++;

     printf("\nNow value of pi = %u\n", pi);
     printf("Now value of pf = %u\n", pf);
     printf("Now value of pc = %u\n", pc);

     pi--;
     pf--;
     pc--;

     printf("\nAgain increment Now value of pi = %u\n", pi);
     printf("Again increment Now value of pf = %u\n", pf);
     printf("Again increment Now value of pc = %u\n", pc);

     pi += 2;
     pf -= 3;
     pc += 4;
     printf("\nNow increment by 2 for pi = %u\n", pi);
     printf("Now decrement by 3 for pf = %u\n", pf);
     printf("Now increment by 4 for pc = %u\n", pc);

     getch();
     return 0;
}
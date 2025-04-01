#include <stdio.h>
#include <conio.h>
int main ()
{
    //practice set to write increment decrement

    int x=7 ,y;

x=++x + x;//x=16
y=++x + x;//y=34,due to increment x=17
//so in next line it will print 17 and not 16 in the x
printf("x=%d y=%d\n",x,y);


  
    getch();
    return 0;
}

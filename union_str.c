#include <stdio.h>
#include <conio.h>
#include <string.h>
union data
{
    char str[20];
    int roll_num;
    float percentage;
};
int main()
{
 
//clrscr();
union data info;
strcpy(info.str,"Devansh");
printf("Name=%s\n",info.str);

info.roll_num=108;
printf("Rolll number:%d\n",info.roll_num);

info.percentage=92.6;
printf("Percentage:%.3f",info.percentage);

printf("\nNOW CHECKING THAT WHAT IS STORED \nname=%s\troll number=%d\tpercentage=%.3f",info.str,info.roll_num,info.percentage);
// beacuse last asigned will be stored another will be replaced 
 

// also checking size of taken by union (both ways are correct )
printf("\nsize taken by union=%d",sizeof(union data));
printf("\nsize taken by union=%d",sizeof(info));



getch();
return 0;
}
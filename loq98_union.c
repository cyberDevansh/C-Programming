#include <stdio.h>
#include <conio.h>
// implenting union 
union student
{
    //if we define two data here and use them in main() then only one is used and other become defective.
    char name[20];
    int roll_number;
};

int main()
{
 
//clrscr();
union student data;

printf("Enter the name of student:");
scanf("%s",data.name);  // here name is store in union memory
printf("Enter the student roll number:");
scanf("%d",&data.roll_number);
 
printf("You entered:");
printf("\n\tRoll number:%d\n\tName=%s",data.roll_number,data.name); //  here name will be corrupted and give garbage value because at last we took input of roll number so only roll umber will get its space and name be will overwritten 
// union only take larger space in two of them and only store one of them not both of them .

getch();
return 0;
}
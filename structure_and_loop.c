#include <stdio.h>
#include <conio.h>
#include <string.h>
struct stud
{
   char str[20];
   int roll_num;
   float percentage;
};
int main()
{
 
//clrscr();
struct stud info[5];
for(int i=0;i<=4;i++)
{
printf("\n\nEnter information of student %d:\n",i+1);
     printf("Name=");
     scanf("%s",info[i].str);
     printf("Roll number=");
     scanf("%d",&info[i].roll_num);
     printf("Percentage=");
     scanf("%f",&info[i].percentage);
     
}
for(int i=0;i<=4;i++)
{
printf("\n\nYou entered information of student %d:\n",i+1);
     printf("Name=%s\t\n",info[i].str);
 
     printf("Roll number=%d\t\n",info[i].roll_num);

     printf("Percentage=%f\t\n",info[i].percentage);
}


getch();
return 0;
}
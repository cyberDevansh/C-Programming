#include <stdio.h>
#include <conio.h>
int main()
{
 

FILE*ptr =fopen("loq2_table.c","r");
char str[100];
while(fgets(str,100,ptr)!=NULL)  // if we use if in place of while then only one line will be printed or say read and other lines will not be read
printf("%s",str);

 
getch();
return 0;
}
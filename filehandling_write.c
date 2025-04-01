#include <stdio.h>
#include <conio.h>
int main()
{
 

FILE*ptr =fopen("loq2_table.c","w");  // to open the file and w or r in next sction defines that whether to read or write the file 
char str[100];
while(fgets(str,100,ptr)!=NULL)  
printf("%s",str);
fclose(ptr);  // to close he opened file 
 
getch();
return 0;
}
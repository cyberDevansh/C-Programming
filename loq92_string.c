#include <stdio.h>
#include <conio.h>
int main()
{
// clrscr();
// string in c:it is array of character datatype which stores charcters in continuous memory locations 
char str[20],str2[8]="MSDHONI",str3[]="vandematram";
printf("Enter your name :");
gets(str);
// scanf("%s",&str); it will not take input after the space because space is null character which terminates the input so we use gets to take input 
printf("RAM RAM %s",str);
printf("\n7=%s\n%s\nsize of str,str2,str3=%d %d %d bytes",str2,str3,sizeof(str),sizeof(str2),sizeof(str3));

getch();
return 0;
}
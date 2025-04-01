#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
     //  char str[]="\0"; this is also a way to initialize null in string
     // clrscr();
     char str1[] = "Naina";
     char str2[10] = "Name";
     char str3[10] = "";
     printf("before:");
     printf("\nstr1=%s", str1);
     printf("\nstr2=%s", str2);
     printf("\nstr3=%s", str3);

strcpy(str2,str1);
     strcpy(str3, str1);
     printf("\n\nafter:");
     printf("\nstr1=%s", str1);
     printf("\nstr2=%s", str2);
     printf("\nstr3=%s", str3);
     getch();
     return 0;
}
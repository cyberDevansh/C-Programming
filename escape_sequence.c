/*

Escape sequence	Meaning
\\	\ character
\'	' character
\"	" character
\?	? character
\a	Alert or bell
\b	Backspace
\f	Form feed
\n	Newline
\r	Carriage return move the cursor to the beginning of the line
\t	Horizontal tab
\v	Vertical tab
\ooo	Octal number of one to three digits
\xhh . . .	Hexadecimal number of one or more digits

*/
#include <stdio.h>

int main(){

   printf("Hello.\nGood morning.\nMy name is Ravi");
   
   printf("\nHello.\tGood morning.\tMy name is Ravi");
   printf("\nHello.\aGood morning.\aMy name is Ravi");
   printf("\nHello.\bGood morning.\bMy name is Ravi");
   printf("\nHello.\fGood morning.\fMy name is Ravi");
   printf("\nHello.\rGood morning.\rMy name is Ravi");
   printf("\nHello.\vGood morning.\vMy name is Ravi");
   printf("Directory in Windows: C:\\users\\user");
   printf("Welcome to \"TutorialsPoint\"\n");
   printf ("\'Welcome\' to TutorialsPoint");
   printf("Welcome to\b TutorialsPoint");
   printf("%c", '\141');
   printf("%c", '\x41');
   printf("Hello \a world\n");



   return 0;
}
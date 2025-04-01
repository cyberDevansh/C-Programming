#include <stdio.h>
#include <conio.h>
int main()
{
    // check whether the alphabet is consonant or vowel by switch statement

    char a;
    printf("enter a charcter:");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is vowel\n", a);
break;
    default:
        printf("%c is consonant\n", a);
    }
    // {
    //     int day = 2;
    //     switch (day)
    //     {
    //     case 1:
    //         printf("monday\n");
    //     case 2:
    //         printf("tuesday\n");
    //     case 3:
    //         printf("wednesday\n");
    //     case 4:
    //         printf("thursday\n");
    //     case 5:
    //         printf("friday\n");
    //     case 6:
    //         printf("saturday\n");
    //     case 7:
    //         printf("sunday\n");
    //         break;
    //     default:
    //         printf("invalid day\n");
    //         break;
    //    }
        getch();
        return 0;
    }

#include <stdio.h>
#include <conio.h>
int main()
{
    int choice;
    printf("enter a choice(1-3) to comment on Tanvi ma'am:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("SHE IS ONE OF MY FAVOURITE TEACHER\n");
        break;
    case 2:
        printf("SHE NEVER GETS IRRITATED BY QUESTIONS \n");
        break;
    case 3:
        printf("I LOVE HER FRIENDLY NATURE \n");

        break;

    default:
        printf("I HAVE MUCH TO TELL ABOUT HER AND WILL CONTINUE IN OUR CODES WHOLE OVER THE YEAR");
        break;
    }

    getch();
    return 0;
}
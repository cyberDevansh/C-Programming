#include <stdio.h>
#include <conio.h>
int main()

        // factors of a given number using while loop

    {
        int num, i = 1;
        printf("enter a number:");
        scanf("%d", &num);
        printf("factors of %d are:\t", num);
        while (i <= num)
        {

            if (num % i == 0)
            {
                printf("%d\t", i);
            }
             ++i; // i=i++; and i++; are both diiferent things so if we do i=i++ it will give infinite loop.
        }
// i=i++; in this i is directly assigned to i and in next iteration i remains i because here i++ here does not increase the value
        getch();
        return 0;
    }

   
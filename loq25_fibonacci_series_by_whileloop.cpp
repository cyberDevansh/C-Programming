#include <stdio.h>
#include <conio.h>
int main()

{
    // to print fibonacci sequence using increment decrement operator
    int n, t1 = 0, t2 = 1, nextterm;
    printf("enter number of terms:");
    scanf("%d", &n);
    printf("fibonacci sequence:\t");
    int i=1;
    while(i<=n)
    {
        printf("%d\t",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
        i++;
        }
    

    getch();
    return 0;
    }
    

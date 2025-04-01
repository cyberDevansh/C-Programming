#include <stdio.h>
#include <conio.h>
int main ()
{
    //print fibonacci series
    //fibonacci series is the series of number which is the sum of two previous number in the series,example:0,1,1,2,3,5
    int n,i;
    printf("enter a number of terms:");
    scanf("%d",&n);
    int t1=0,t2=1;
    printf("fibnacci series:\t");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",t1);
        int next =t1+t2;
        t1=t2;
        t2=next;
    }



    getch();
    return 0;
}
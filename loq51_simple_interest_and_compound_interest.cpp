#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // to calculate simple interest and compound interest
// SI=(P*R*T)/100 
// CI=P*(1+R/100)^T -P
    double principal, rate;
    int time;
    printf("enter principle amount:");
    scanf("%lf", &principal);

    printf("enter annual interest rate(in percentage):");
    scanf("%lf", &rate);

    printf("enter time period(in years):");
    scanf("%d", &time);

    float simple_interest = (principal * rate * time) / 100;
    float compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("simple interest:%.3lf\n", simple_interest);//here before format specifier we write.3 just after % to take output in just 3 decimal points

    printf("compound interest:%.4lf\n", compound_interest);//similarly here we used .4 after % to take output in 4 decimal 

    getch();
    return 0;
}
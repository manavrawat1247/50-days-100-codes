#include <stdio.h>
int main()
{
float rate,time,pri,interest;
printf("Enter rate percent:");
scanf("%f",&rate);
printf("Enter time in years:");
scanf("%f",&time);
printf("Enter principal amount:");
scanf("%f",&pri);
interest=pri*rate*time;
printf("INTESREST CALCULATED:%d\n",interest);
}
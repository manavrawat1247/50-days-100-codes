#include<stdio.h>
int main()
{
int yr;
printf("Enter a year:");
scanf("%d",&yr);
if(yr%4==0&yr%100!=0)
printf("leap year");
else 
printf("Not a leap year");
}

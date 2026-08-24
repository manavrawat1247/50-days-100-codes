#include <stdio.h>
int main()
{
int n,i,fact=1;
printf("Enter a number");
scanf("%d",&n);
for(i=0;i<=n,i++)
{
fact=fact*i;
}
printf("Factorial of number:%d\n",fact);
}

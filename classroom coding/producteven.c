#include<stdio.h>
int main()
{
int n,i,prod=1;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
{
prod=prod*n;
}
printf("%d",prod);
}
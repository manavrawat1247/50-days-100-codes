#include<stdio.h>
int main()
{
int n,i,p=1;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
p=p*i;
}
}
printf("%d",p);
}

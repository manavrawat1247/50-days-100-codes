#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter two numbers:");
scanf("%d %d",&n1,&n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("First number:%d\n",n1);
printf("Second number:%d\n",n2);
}

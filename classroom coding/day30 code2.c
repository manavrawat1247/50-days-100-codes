#include<stdio.h>
int main()
{
int i,n,c=0,d=0,f=0;
printf("Enter a number:");
scanf("%d",&n);
int arr[n];
printf("Enter array numbers:");
for(i=0;i<=n-1;i+++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<=n-1;i++) 
{
if(arr[i]>1)
c++;
else if(arr[i]<1)
d++;
else
f++;
}
printf("Positive numbers count:%d/n",c);
printf("Negative numbers count:%d/n",d);
printf("Zero numbers count:%d/n",f);
}
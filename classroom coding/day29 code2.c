#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter a number:");
scanf("%d",&n);
int arr[n];
printf("Enter array numbers:");
for(i=0;i<=n-1;i+++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<=n-1;i+++)
{
sum=sum+arr[i];
}
printf("Sum of array elements:%d",sum);
}

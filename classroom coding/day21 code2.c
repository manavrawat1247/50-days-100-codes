#include <stdio.h>
int main() 
{
int n, i, sum = 0,m;
printf("Enter a number: ");
scanf("%d", &n);
m=n;
for (i = 1; i < n; i++) 
{
if (n % i == 0)
{
sum = sum + i;
}
}
if (sum==m)
printf("%d is a perfect number.",m);
else
printf("%d is not a perfect number.",m);
}

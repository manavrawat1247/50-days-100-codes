#include <stdio.h>

int main()
{
int n, i;
float sum = 0;
scanf("%d", &n);
for(i = 1; i <= n; i++)
{
sum = sum + (2.0 * i) / (4 * i - 1);
}
printf("Sum of series%2f/n", sum);
}
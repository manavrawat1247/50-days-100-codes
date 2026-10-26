#include <stdio.h>
int main()
{
int a[100], n, i, sum = 0;
int total, missing;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter array elements: ");
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
sum = sum + a[i];
}
total = n * (n + 1) / 2;
missing = total - sum;
printf("Missing number = %d\n", missing);
}

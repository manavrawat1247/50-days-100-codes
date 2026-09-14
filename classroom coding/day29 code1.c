#include <stdio.h>
int main() 
{
    int n, i, j, c;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) 
	{
        c= 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                c++;
            }
        }
        if(c==2) 
		{
            printf("%d ", i);
        }
    }
}

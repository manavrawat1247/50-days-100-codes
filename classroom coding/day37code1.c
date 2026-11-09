
#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        sum[i] = 0;
        for (j = 0; j < n; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < m; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, a[10][10], symmetric = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] != a[j][i])
                symmetric = 0;

    if(symmetric)
        printf("Symmetric");
    else
        printf("Not Symmetric");

    return 0;
}
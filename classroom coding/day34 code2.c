#include <stdio.h>

int main() {
    int n, element, pos = -1;

    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &element);

    for(int i = 0; i < n; i++) {
        if(a[i] == element) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Element not found");
        return 0;
    }

    for(int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
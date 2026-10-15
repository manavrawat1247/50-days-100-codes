#include <stdio.h>
int main() {
    int arr[100], n, x;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int ceilIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("%d\n", ceilIndex);
    return 0;
    
    
}
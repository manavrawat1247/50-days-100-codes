#include <stdio.h>
int main() {
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements: ");
    for (int i = 0; i < n; i++) {
        int next_greater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }
        printf("%d", next_greater);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
    
}
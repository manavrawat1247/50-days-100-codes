
#include <stdio.h>

int main() {
    int nums[100], n, i, j;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (nums[i] == nums[j]) {
                printf("Repeated element: %d\n", nums[i]);
                return 0;
            }
        }
    }

    printf("No repeated element found.\n");

    return 0;
}

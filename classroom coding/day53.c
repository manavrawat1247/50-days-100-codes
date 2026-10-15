#include <stdio.h>
int main() {
    int nums[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int totalSum = 0, leftSum = 0, pivotIndex = -1;
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            pivotIndex = i;
            break;
        }
        leftSum += nums[i];
    }

    printf("%d\n", pivotIndex);
    return 0;
    
    
#include <stdio.h>
int main() {
    int nums[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority_count = n / 2;
    int found_majority = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > majority_count) {
            found_majority = nums[i];
            break;
        }
    }

    printf("%d\n", found_majority);
    return 0;
    
}
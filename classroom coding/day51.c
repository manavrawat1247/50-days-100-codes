#include <stdio.h>
int main() {
    int nums[100], n, target;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target value: ");
    scanf("%d", &target);

    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    printf("%d,%d\n", first, last);
    return 0;
    
}
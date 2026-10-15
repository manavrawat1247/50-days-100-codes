#include <stdio.h>
int main() {
    int arr[100], n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int max_sum = 0;
    for (int i = 0; i <= n - k; i++) {
        int current_sum = 0;
        for (int j = 0; j < k; j++) {
            current_sum += arr[i + j];
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, max_sum);
    return 0;
    
}
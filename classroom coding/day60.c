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

    printf("Maximum elements in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int max_element = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max_element) {
                max_element = arr[i + j];
            }
        }
        printf("%d ", max_element);
    }
    printf("\n");
    return 0;
}
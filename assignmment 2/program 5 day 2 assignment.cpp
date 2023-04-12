#include <stdio.h>

int main() {
    int arr[] = {2, 7, 1, 23, 5, 1, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("\nArray after removing duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[] = {2, 7, 1, 23, 5, 1, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even[n], odd[n];
    int i, j = 0, k = 0;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[j] = arr[i];
            j++;
        } else {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("\nArray of even elements: ");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }

    printf("\nArray of odd elements: ");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}

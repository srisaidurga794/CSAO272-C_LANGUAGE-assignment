#include <stdio.h>

void copyArray(int *arr1, int *arr2, int size) {
    int i;
    for (i = 0; i < size; ++i) {
        *(arr2 + i) = *(arr1 + i); // Copy elements using pointer arithmetic
    }
}

int main() {
    int arr1[100], arr2[100], size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements of the array:\n", size);
    for (i = 0; i < size; ++i) {
        scanf("%d", (arr1 + i)); 
    }

    copyArray(arr1, arr2, size);

    printf("Elements of the first array:\n");
    for (i = 0; i < size; ++i) {
        printf("%d ", *(arr1 + i));
    }

    printf("\nElements of the second array (copied from the first array):\n");
    for (i = 0; i < size; ++i) {
        printf("%d ", *(arr2 + i)); 
    }

    return 0;
}


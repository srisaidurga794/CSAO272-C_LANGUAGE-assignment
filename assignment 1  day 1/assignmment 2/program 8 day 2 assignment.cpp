#include <stdio.h>

void findFrequency(int arr[], int size) {
    int i, j, count;

    for (i = 0; i < size; i++) {
        count = 1;
        for (j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 2, 4, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nFrequency of each element:\n");
    findFrequency(arr, size);

    return 0;
}


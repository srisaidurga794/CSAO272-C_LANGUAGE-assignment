#include <stdio.h>

int main() {
    int arr[50], n, i, j, temp;
    int largest1, largest2, smallest1, smallest2;
    float avg;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
}
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    largest1 = arr[0];
    largest2 = arr[1];
    smallest1 = arr[n-1];
    smallest2 = arr[n-2];


    avg = (largest2 + smallest2) / 2.0;

    
    for (i = 0; i < n; i++) {
        if (arr[i] == avg) {
            printf("The average value %0.1f is present in the array", avg);
            return 0;
        }
    }

    printf("The average value %0.1f is not present in the array", avg);

    return 0;
}

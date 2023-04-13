#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
    }
    printf("Reverse of the number is: %d", reverse);
    return 0;
}


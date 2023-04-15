#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, sum = 0, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    len = strlen(str) - 1; 

    for (i = 0; i < len; ++i) {
        sum += (int) str[i];
    }

    printf("Sum of ASCII values of all characters in the string = %d", sum);

    return 0;
}


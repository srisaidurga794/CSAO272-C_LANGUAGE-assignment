#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, max_count = 0, len;
    char max_char;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string input

    len = strlen(str) - 1; // Exclude newline character

    for (i = 0; i < len; ++i) {
        int count = 1;

        for (j = i + 1; j < len; ++j) {
            if (str[i] == str[j] && str[i] != ' ') {
                ++count;
            }
        }

        if (count > max_count) {
            max_count = count;
            max_char = str[i];
        }
    }

    printf("Max repeated character in the string = %c\n", max_char);
    printf("It occurs %d times", max_count);

    return 0;
}


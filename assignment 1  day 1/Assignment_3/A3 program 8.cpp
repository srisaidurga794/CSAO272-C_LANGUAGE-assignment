#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
    } else {
        int i;
        for (i = start; i <= end; ++i) {
            swap((str + start), (str + i));
            permute(str, start + 1, end); 
            swap((str + start), (str + i));
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    printf("All permutations of the given string are:\n");
    permute(str, 0, strlen(str) - 1);

    return 0;
}


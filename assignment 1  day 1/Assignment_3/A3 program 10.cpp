#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    char *start, *end, temp; 
    int len = strlen(str);

    start = str; 
    end = str + len - 1; 

   
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str); 

    printf("Reversed string: %s", str);

    return 0;
}


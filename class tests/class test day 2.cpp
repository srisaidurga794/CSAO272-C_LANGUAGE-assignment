..write a code for ascending order and descending 0rder count 3 and range 30

#include <stdio.h>

int main() {
    int i;
    
    printf("Ascending order:\n");
    for(i = 0; i <= 30; i += 3) {
        printf("%d ", i);
    }
    
    printf("\nDescending order:\n");
    for(i = 30; i >= 0; i -= 3) {
        printf("%d ", i);
    }
    
    return 0;
}


2..write a code for concatenate of two stings


#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "world!";
    
    strcat(str1, str2);
    
    printf("Concatenated string: %s", str1);
    
    return 0;
}


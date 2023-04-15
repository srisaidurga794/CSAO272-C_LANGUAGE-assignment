#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main() {
   
    FILE *input_file = fopen("data.txt", "r");
    if (input_file == NULL) {
        printf("Error: Unable to open input file.\n");
        return 1;
    }

    
    int letter_counts[ALPHABET_SIZE] = {0};

    
    int c;
    while ((c = fgetc(input_file)) != EOF) {
        if (isalpha(c)) {
            c = tolower(c);
            letter_counts[c - 'a']++;
        }
    }

    
    fclose(input_file);

    
    FILE *output_file = fopen("statistics.txt", "w");
    if (output_file == NULL) {
        printf("Error: Unable to open output file.\n");
        return 1;
    }

    
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        fprintf(output_file, "%c: %d\n", 'a' + i, letter_counts[i]);
    }

    
    fclose(output_file);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    FILE *input_file = fopen("input.txt", "r"); 
    if (input_file == NULL) {
        printf("Error: could not open input file.\n");
        return 1;
    }

    FILE *output_file = fopen("output.txt", "w"); 
    if (output_file == NULL) {
        printf("Error: could not open output file.\n");
        return 1;
    }

    char line[1000];
    while (fgets(line, sizeof(line), input_file)) {
        char *pos = strstr(line, "red"); 
        while (pos != NULL) {
            strncpy(pos, "blue", 4); 
            pos = strstr(pos + 4, "red"); 
        }
        fputs(line, output_file); 
    }

    fclose(input_file); 
    fclose(output_file); 
    return 0;
}


#include <stdio.h>

int main() {
    FILE *file = fopen("data.bin", "rb"); 
    if (file == NULL) {
        printf("Error: could not open file.\n");
        return 1;
    }

    
    int num;
    float decimal;
    char string[20];
    fread(&num, sizeof(int), 1, file);
    fread(&decimal, sizeof(float), 1, file);
    fread(string, sizeof(char), 20, file);

    
    printf("Number: %d\n", num);
    printf("Decimal: %f\n", decimal);
    printf("String: %s\n", string);

    fclose(file); 
    return 0;
}


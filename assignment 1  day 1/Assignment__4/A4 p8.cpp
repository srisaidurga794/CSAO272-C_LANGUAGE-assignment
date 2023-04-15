#include <stdio.h>

union Data {
    int integer;
    float floating_point;
};

int main() {
    union Data data;
    char type;

    
    printf("Enter the type of data you want to enter ('i' for integer or 'f' for floating point): ");
    scanf("%c", &type);

   
    if (type == 'i') {
        printf("Enter an integer value: ");
        scanf("%d", &data.integer);
        printf("You entered the integer value: %d\n", data.integer);
    } else if (type == 'f') {
        printf("Enter a floating point value: ");
        scanf("%f", &data.floating_point);
        printf("You entered the floating point value: %f\n", data.floating_point);
    } else {
        printf("Invalid data type.");
        return 0;
    }

    return 0;
}


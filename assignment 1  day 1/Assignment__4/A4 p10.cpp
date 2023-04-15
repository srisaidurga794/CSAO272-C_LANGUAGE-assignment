
#include <stdio.h>
#include <math.h>

// Define a union shape
union Shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

// Define a function to calculate the area of a shape
float calculate_area(union Shape shape, char shape_type) {
    if (shape_type == 'c') {
        return M_PI * shape.radius * shape.radius;
    } else if (shape_type == 'r') {
        return shape.rectangle.length * shape.rectangle.width;
    }
    return 0.0;
}

int main() {
    char shape_type;
    union Shape shape;

    
    printf("Enter the shape type ('c' for circle or 'r' for rectangle): ");
    scanf("%c", &shape_type);

   
    if (shape_type == 'c') {
        printf("Enter the radius: ");
        scanf("%f", &shape.radius);
    } else if (shape_type == 'r') {
        printf("Enter the length: ");
        scanf("%f", &shape.rectangle.length);
        printf("Enter the width: ");
        scanf("%f", &shape.rectangle.width);
    } else {
        printf("Invalid shape type.");
        return 0;
    }

    
    float area = calculate_area(shape, shape_type);
    printf("The area of the shape is %.2f\n", area);

    return 0;
}


#include <stdio.h>

#define PI 3.14159
#define TRIANGLE_AREA(base, height) (0.5 * (base) * (height))

/* Function prototypes*/

float area_of_circle(float radius);
float area_of_rectangle(float length, float width);
float area_of_triangle(float base, float height);
float area_of_square(float side);
float area_of_trapezoid(float base1, float base2, float height);
float area_of_ellipse(float semi_major, float semi_minor);

int main() {
    /* you want to any areas to input here */

    int choice;
    printf("Choose the shape to calculate area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Square\n");
    printf("5. Trapezoid\n");
    printf("6. Ellipse\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float radius;
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of Circle: %.2f\n", area_of_circle(radius));
            break;
        }
        case 2: {
            float length, width;
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            printf("Area of Rectangle: %.2f\n", area_of_rectangle(length, width));
            break;
        }
        case 3: {
            float base, height;
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area of Triangle: %.2f\n", area_of_triangle(base, height));
            break;
        }
        case 4: {
            float side;
            printf("Enter side of the square: ");
            scanf("%f", &side);
            printf("Area of Square: %.2f\n", area_of_square(side));
            break;
        }
        case 5: {
            float base1, base2, height;
            printf("Enter bases and height of the trapezoid: ");
            scanf("%f %f %f", &base1, &base2, &height);
            printf("Area of Trapezoid: %.2f\n", area_of_trapezoid(base1, base2, height));
            break;
        }
        case 6: {
            float semi_major, semi_minor;
            printf("Enter semi-major and semi-minor axes of the ellipse: ");
            scanf("%f %f", &semi_major, &semi_minor);
            printf("Area of Ellipse: %.2f\n", area_of_ellipse(semi_major, semi_minor));
            break;
        }
        default:
            printf("Invalid choice!\n");
    }
}


/* function defination */

float area_of_circle(float radius) {
    return PI * radius * radius;
}

float area_of_rectangle(float length, float width) {
    return length * width;
}

float area_of_triangle(float base, float height) {
    return TRIANGLE_AREA(base, height);
}

float area_of_square(float side) {
    return side * side;
}

float area_of_trapezoid(float base1, float base2, float height) {
    return 0.5 * (base1 + base2) * height;
}

float area_of_ellipse(float semi_major, float semi_minor) {
    return PI * semi_major * semi_minor;
}





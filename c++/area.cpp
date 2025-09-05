#include <iostream>
#include <cmath>

// Area of a rectangle
double areaRectangle(double length, double width) {
    return length * width;
}

// Area of a square
double areaSquare(double side) {
    return side * side;
}

// Area of a triangle
double areaTriangle(double base, double height) {
    return 0.5 * base * height;
}

// Area of a circle
double areaCircle(double radius) {
    return M_PI * radius * radius;
}

// Area of a parallelogram
double areaParallelogram(double base, double height) {
    return base * height;
}

// Area of a trapezoid
double areaTrapezoid(double base1, double base2, double height) {
    return 0.5 * (base1 + base2) * height;
}

// Area of an ellipse
double areaEllipse(double a, double b) {
    return M_PI * a * b;
}

int main() {
    std::cout << "Rectangle area (5, 3): " << areaRectangle(5, 3) << std::endl;
    std::cout << "Square area (4): " << areaSquare(4) << std::endl;
    std::cout << "Triangle area (6, 2): " << areaTriangle(6, 2) << std::endl;
    std::cout << "Circle area (3): " << areaCircle(3) << std::endl;
    std::cout << "Parallelogram area (7, 4): " << areaParallelogram(7, 4) << std::endl;
    std::cout << "Trapezoid area (3, 5, 2): " << areaTrapezoid(3, 5, 2) << std::endl;
    std::cout << "Ellipse area (3, 2): " << areaEllipse(3, 2) << std::endl;
    return 0;
}
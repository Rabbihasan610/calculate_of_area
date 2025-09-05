/**
 * Calculate area of different shapes
 */

// Area of a rectangle
function areaRectangle(width, height) {
    return width * height;
}

// Area of a circle
function areaCircle(radius) {
    return Math.PI * radius * radius;
}

// Area of a triangle
function areaTriangle(base, height) {
    return 0.5 * base * height;
}

// Example usage:
console.log('Rectangle area:', areaRectangle(5, 10)); // 50
console.log('Circle area:', areaCircle(7)); // ~153.94
console.log('Triangle area:', areaTriangle(6, 8)); // 24
<?php
// Function to calculate area of a rectangle
function rectangleArea($length, $width) {
    return $length * $width;
}

// Function to calculate area of a circle
function circleArea($radius) {
    return pi() * pow($radius, 2);
}

// Function to calculate area of a triangle
function triangleArea($base, $height) {
    return 0.5 * $base * $height;
}

// Example usage:
echo "Rectangle Area (5 x 10): " . rectangleArea(5, 10) . "<br>";
echo "Circle Area (radius 7): " . circleArea(7) . "<br>";
echo "Triangle Area (base 8, height 6): " . triangleArea(8, 6) . "<br>";
?>
# 📐 Calculate of Area

This repository demonstrates how to calculate the **area of geometric shapes** using different programming languages:  
- C  
- C++  
- C#  
- JavaScript  
- PHP  

It includes implementations for the following shapes:  
- Circle  
- Rectangle  
- Triangle  
- Square  
- Trapezoid  
- Ellipse  

---

## ⚙️ How It Works

1. The program shows a **menu of shapes**.  
2. The user selects a shape (1–6).  
3. The program asks for the **required inputs** (radius, base, height, etc.).  
4. The respective **function** is called to calculate the area.  
5. The **result is displayed**.  

---

## 🖥️ Implementations by Language  

### 🔹 C (area.c)

```c
#include <stdio.h>
#define PI 3.14159
#define TRIANGLE_AREA(base, height) (0.5 * (base) * (height))

float area_of_circle(float radius) { return PI * radius * radius; }
float area_of_rectangle(float length, float width) { return length * width; }
float area_of_triangle(float base, float height) { return TRIANGLE_AREA(base, height); }
float area_of_square(float side) { return side * side; }
float area_of_trapezoid(float base1, float base2, float height) { return 0.5 * (base1 + base2) * height; }
float area_of_ellipse(float semi_major, float semi_minor) { return PI * semi_major * semi_minor; }

int main() {
    int choice;
    printf("Choose the shape:\n1. Circle\n2. Rectangle\n3. Triangle\n4. Square\n5. Trapezoid\n6. Ellipse\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1: { float r; printf("Enter radius: "); scanf("%f",&r); printf("Area: %.2f\n", area_of_circle(r)); break; }
        case 2: { float l,w; printf("Enter length and width: "); scanf("%f%f",&l,&w); printf("Area: %.2f\n", area_of_rectangle(l,w)); break; }
        case 3: { float b,h; printf("Enter base and height: "); scanf("%f%f",&b,&h); printf("Area: %.2f\n", area_of_triangle(b,h)); break; }
        case 4: { float s; printf("Enter side: "); scanf("%f",&s); printf("Area: %.2f\n", area_of_square(s)); break; }
        case 5: { float b1,b2,h; printf("Enter bases and height: "); scanf("%f%f%f",&b1,&b2,&h); printf("Area: %.2f\n", area_of_trapezoid(b1,b2,h)); break; }
        case 6: { float a,b; printf("Enter semi-major and semi-minor: "); scanf("%f%f",&a,&b); printf("Area: %.2f\n", area_of_ellipse(a,b)); break; }
        default: printf("Invalid choice!\n");
    }
}



---

👉 Do you want me to also **add a table comparing syntax differences** between all these languages (like how each defines PI, functions, input/output)? That would make the README more educational.

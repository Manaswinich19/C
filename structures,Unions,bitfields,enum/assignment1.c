#include <stdio.h>
#include <math.h>

// Structure to represent a 2D point
typedef struct {
    float x;
    float y;
} Point;

// Function to calculate the distance between two points
float distance(Point p1, Point p2) {
    // Using the distance formula: √((x2 - x1)^2 + (y2 - y1)^2)
    return sqrt((p2.x - p1.x) *(p2.x - p1.x) + (p2.y - p1.y)* (p2.y - p1.y));
  

    // Alternatively, you can use the following formula:
    // return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Function to find the midpoint between two points
Point midpoint(Point p1, Point p2) {
    Point mid;
    // Midpoint formula: ((x1 + x2)/2, (y1 + y2)/2)
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

// Function to calculate the area of a triangle given three points
float triangleArea(Point p1, Point p2, Point p3) {
    // Using the determinant method (shoelace formula)     
    return fabs((p1.x * (p2.y - p3.y) +        //fabs is used to get absolute value defined in math.h
                 p2.x * (p3.y - p1.y) +         //it gives non negative value of the given value
                 p3.x * (p1.y - p2.y)) / 2.0);
}

// Main function
int main() {
    Point a, b, c;

    // Input coordinates for point A
    printf("Enter coordinates of point A (x y): ");
    scanf("%f %f", &a.x, &a.y);

    // Input coordinates for point B
    printf("Enter coordinates of point B (x y): ");
    scanf("%f %f", &b.x, &b.y);

    // Input coordinates for point C
    printf("Enter coordinates of point C (x y): ");
    scanf("%f %f", &c.x, &c.y);

    // Display distance between A and B
    printf("Distance between A and B: %.2f\n", distance(a, b));

    // Calculate and display midpoint between A and B
    Point mid = midpoint(a, b);
    printf("Midpoint of A and B: (%.2f, %.2f)\n", mid.x, mid.y);

    // Calculate and display area of triangle ABC
    printf("Area of triangle ABC: %.2f\n", triangleArea(a, b, c));

    return 0;
}

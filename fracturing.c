// Lonzel Fanniel
// UCF ID 5577084
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function
int main(int argc, char **argv) {
    // Call each function
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}

// Helper function to get user input
void getUserInput(double *x1, double *x2, double *y1, double *y2) {
    printf("Enter x1: ");
    scanf("%lf", x1);
    printf("Enter x2: ");
    scanf("%lf", x2);
    printf("Enter y1: ");
    scanf("%lf", y1);
    printf("Enter y2: ");
    scanf("%lf", y2);

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", *x1, *y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", *x2, *y2);
}

// Distance Calculator
double calculateDistance() {
    double x1, x2, y1, y2;
    getUserInput(&x1, &x2, &y1, &y2);
    // Distance Formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2lf\n", distance);
    return distance;
}

// Perimeter Calculator
double calculatePerimeter() {
    double diameter = calculateDistance();
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    return 1.0;  // Difficulty
}

// Area Calculator
double calculateArea() {
    double diameter = calculateDistance();
    double radius = diameter / 2.0;
    double area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    return 2.0;  // Difficulty
}

// Width Calculator
double calculateWidth() {
    double x1, x2, y1, y2;
    getUserInput(&x1, &x2, &y1, &y2);
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    return 1.0;  // Difficulty
}

// Height Calculator
double calculateHeight() {
    double x1, x2, y1, y2;
    getUserInput(&x1, &x2, &y1, &y2);
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    return 1.0;  // Difficulty
}

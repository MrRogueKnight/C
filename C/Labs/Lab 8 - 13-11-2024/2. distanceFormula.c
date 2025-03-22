#include <stdio.h>
#include <math.h>

// Define the Point struct
struct Point {
    double x;
    double y;
};

// Function to calculate the distance between two points
double calculateDistance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    // Define two points
    struct Point point1, point2;

    // Input coordinates for point1
    printf("Enter x and y coordinates for point1: ");
    scanf("%lf %lf", &point1.x, &point1.y);

    // Input coordinates for point2
    printf("Enter x and y coordinates for point2: ");
    scanf("%lf %lf", &point2.x, &point2.y);

    // Calculate the distance
    double distance = calculateDistance(point1, point2);

    // Print the distance
    printf("Distance between the points: %.2lf\n", distance);

    return 0;
}
/**
Enter x and y coordinates for point1: 2 3
Enter x and y coordinates for point2: 10 13
Distance between the points: 12.81
*/

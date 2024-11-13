#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
    };

double distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point p1 = {0, 0};
    struct Point p2 = {3, 4};

    printf("Distance between points: %.2f\n", distance(p1, p2));

    return 0;
}

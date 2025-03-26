//1. Distance Converter (Meter to Kilometer and Meter)
// Program to convert a distance in meter to its equivalent kilometer and meter

#include <stdio.h>

int main() {
    int meter; // variable to store the distance in meter
    printf("Enter the distance: ");
    scanf("%d", &meter); // input the distance from the user

    // calculate the kilometer and meter
    int km = meter / 1000;
    int m = meter % 1000;

    // print the result
    printf("%d meter = %d Km and %d meters.\n", meter, km, m);
    return 0;
}
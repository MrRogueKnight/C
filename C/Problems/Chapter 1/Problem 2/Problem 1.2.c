/*
Problem 1.2
The distance between two cities (in kilometers) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches
and centimeters.

Enter the distance in Kilometers: 3
Distance in meters = 3000.000000
Distance in centimeter = 300000.000
Distance in feet = 9842.519531
Distance in inches = 118110.234375
*/
#include<stdio.h>
int main(){
    float km, m, feet, inches,cm;
    printf("Enter the distance in Kilometers: ");
    scanf("%f", &km);
    m = km * 1000;               // 1 km = 1000 m
    cm = m * 100;                // 1 m = 100 cm
    inches = cm / 2.54;          // 1 inch = 2.54 cm
    feet = inches / 12;          // 1 feet = 12 inches
    printf("\nDistance in meters = %f", m);
    printf("\nDistance in centimeter = %f", cm);
    printf("\nDistance in feet = %f", feet);
    printf("\nDistance in inches = %f", inches);
    return 0;
}

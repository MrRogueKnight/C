/*
4. WAP to find Fahrenheit of a Celsius. formula:- “C*(9/5)+32”
*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit using the formula: Fahrenheit = (Celsius * 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;

    // Display temperature in Fahrenheit
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}


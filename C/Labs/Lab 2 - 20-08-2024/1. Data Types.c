/*
1. WAP to declare and initialize all data types e.g. int, float, char, double, long, short, long
double, long long and print their size (in Bytes) using the “sizeof” operator. [ “%lu”]
*/
#include <stdio.h>

int main() {
    // Declare and initialize variables
    int intType = 42; // An integer
    float floatType = 3.14; // A floating-point number
    double doubleType = 2.71828; // A double-precision floating-point number
    char charType = 'A'; // A character
    long long longLongType = 1234567890; // A long long integer
    short shortType = 32767; // A short integer
    long double longDoubleType = 1.234567890123456; // A long double

    // Print sizes of each data type
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of long long: %zu bytes\n", sizeof(longLongType));
    printf("Size of short: %zu bytes\n", sizeof(shortType));
    printf("Size of long double: %zu bytes\n", sizeof(longDoubleType));
    getch();
    return 0;
}


/*1. Write a C program to swap two numbers using pointers*/
#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;   // Store the value of x in temp
    *x = *y;     // Copy the value of y to x
    *y = temp;   // Copy the value of temp (which holds the original x) to y
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function
    swap(&a, &b);

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

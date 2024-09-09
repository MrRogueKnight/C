/*
5. Write a C program to perform swapping of two integers using a third variable.
*/
#include<stdio.h>

int main() {
    int num1, num2, temp;

    // Ask user for input
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    // Display values before swapping
    printf("Before Swapping num1=%d, num2=%d\n", num1, num2);

    // Swapping using third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display values after swapping
    printf("After Swapping num1=%d, num2=%d\n", num1, num2);
    getch();
    return 0;
}

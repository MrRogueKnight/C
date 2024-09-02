/*
Title: Swapping Numbers
Write a C program to perform swapping of two integers without using a third variable.
Input: Enter num1: 10 Enter num2: 20
Output: Before Swapping num1=10, num2=20 After Swapping num1=20, num2=10
*/
/*
Formula that can be used here are
num1 = num1 + num2;
num2 = num1 - num2;
num1 = num1 - num2;

Or

num1 = num1 ^ num2;
num2 = num1 ^ num2;
num1 = num1 ^ num2;

Or

num1 = num1 * num2;
num2 = num1 / num2;
num1 = num1 / num2;
*/
#include<stdio.h>
int main(){
    // Declare variables to store the two numbers
int num1, num2;

// Prompt the user to enter the first number
printf("Enter num1: ");
scanf("%d", &num1);

// Prompt the user to enter the second number
printf("Enter num2: ");
scanf("%d", &num2);

// Display the numbers before swapping
printf("\nBefore Swapping:\n");
printf("num1 = %d\n", num1);
printf("num2 = %d\n", num2);

// Swap the numbers without using a third variable
num1 = num1 + num2; // Add num2 to num1
num2 = num1 - num2; // Subtract num2 from the result (effectively swapping)
num1 = num1 - num2; // Subtract num2 from the result (effectively swapping)

// Display the numbers after swapping
printf("\nAfter Swapping:\n");
printf("num1 = %d\n", num1);
printf("num2 = %d\n", num2);

// Wait for the user to press a key before exiting
getch();
return 0;
}

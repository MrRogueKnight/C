/* 7. Create a C program that uses pointers to functions to implement a simple calculator (addition, subtraction, multiplication, division)
where the operation is chosen at runtime.*/

#include <stdio.h>

// Function prototypes for the operations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// Main calculator function that takes a function pointer
void calculator(int (*operation)(int, int), int a, int b) {
    printf("Result: %d\n", operation(a, b));  // Call the function via the function pointer
}

int main() {
    int choice, a, b;

    // Array of function pointers
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Menu for choosing an operation
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Validate the choice and perform the corresponding operation
    if (choice >= 1 && choice <= 4) {
        if (choice == 4 && b == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            calculator(operations[choice - 1], a, b);  // Call the chosen operation
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;  // Integer division
}

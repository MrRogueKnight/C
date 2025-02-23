//7. Calculator Program
// Program to input two integers and provide a menu to the user to select an operation

#include <stdio.h>

int main() {
    int num1, num2; // variables to store the two numbers
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2); // input the numbers from the user

    // display the menu
    printf("Select the operation from the menu\n");
    printf("(A for Add, S for Subtract, M for Multiplication, D for Division): ");

    char op; // variable to store the operation
    scanf(" %c", &op); // input the operation from the user

    // perform the operation
    switch (op) {
        case 'A':
            // add the numbers
            printf("The Sum is %d.\n", num1 + num2);
            break;
        case 'S':
            // subtract the numbers
            printf("The Difference is %d.\n", num1 - num2);
            break;
        case 'M':
            // multiply the numbers
            printf("The Product is %d.\n", num1 * num2);
            break;
        case 'D':
            // check for division by zero
            if (num2 != 0) {
                // divide the numbers
                printf("The Quotient is %d.\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation. Please select a valid operation.\n");
            break;
    }

    return 0;
}
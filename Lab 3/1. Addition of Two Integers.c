/*
1. WAP to perform the addition of two integers and display the result. Input must be given by user.
*/
#include<stdio.h>

int main() {
    int num1, num2, sum;

    // Ask user for input
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    // Perform addition
    sum = num1 + num2;

    // Display result
    printf("Sum is %d\n", sum);
    getch();
    return 0;
}

/*
Add a getch(); or getchar(); statement: At the end of your program, add a getch() or getchar() statement.
This will pause the program and wait for you to press a key before closing the console window
*/

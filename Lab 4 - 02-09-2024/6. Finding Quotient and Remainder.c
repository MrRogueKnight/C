/**
Title: Finding Quotient and Remainder
WAP to perform to take two integers as input from the user and perform division of first integer by second
integer using subtraction and return quotient and remainder.
Note:first integer >= second integer. Don’t use *, /, %.
Input : Enter two numbers: 27 5
Output: Quotient: 5 Remainder: 2
**/
/*
Here's a step-by-step breakdown:

1. #include<stdio.h>: This line includes the standard input-output header file, which provides functions for input and output operations.

2. void divide(int dividend, int divisor): This line declares a function named divide that takes two integer arguments: dividend and divisor. The void keyword indicates that the function does not return any value.

3. int quotient = 0;: This line declares an integer variable quotient and initializes it to 0. This variable will store the quotient of the division.

4. while (dividend >= divisor): This line starts a while loop that continues as long as dividend is greater than or equal to divisor.

5. dividend -= divisor;: Inside the loop, this line subtracts divisor from dividend in each iteration.

6. quotient++;: This line increments the quotient variable by 1 in each iteration.

7. printf("Quotient: %d\n", quotient);: After the loop ends, this line prints the final value of quotient as the quotient of the division.

8. printf("Remainder: %d\n", dividend);: This line prints the final value of dividend as the remainder of the division.

The logic behind the function is:

- Subtract the divisor from the dividend as many times as possible (using the while loop).
- Count the number of subtractions (which gives the quotient).
- The remaining value of the dividend is the remainder.

For example, if you call the function with divide(17, 5), the output will be:


Quotient: 3
Remainder: 2


Because 17 divided by 5 is 3 with a remainder of 2.
*/
#include<stdio.h>
void divide(int dividend, int divisor) {
    int quotient = 0;
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", dividend);
}

int main(){
    int num1, num2;
    printf("Enter two numbers: ");

    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num1>=num2){
            divide(num1, num2);
    }
    else{
         printf("Note:first integer >= second integer.");
    }

getch();
return 0;
}

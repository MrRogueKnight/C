/**
Title: Finding Quotient and Remainder
WAP to perform to take two integers as input from the user and perform division of first integer by second
integer using subtraction and return quotient and remainder.
Note:first integer >= second integer. Don’t use *, /, %.
Input : Enter two numbers: 27 5
Output: Quotient: 5 Remainder: 2
**/
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

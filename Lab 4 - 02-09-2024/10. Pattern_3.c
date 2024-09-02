/**
Title: Pattern 2
WAP to print the following pattern
Input: Enter the value of n:5
--------------
*
***
*****
*******
*********
--------------
*/
/*
These types of patterns are called "triangle" or "pyramid" patterns. Here's a simple algorithm to print them:
1. Determine the number of rows (height) of the pattern.
2. Use a loop to iterate through each row.
3. Inside the loop, use another loop to print the required number of asterisks (*) for each row.
4. The number of asterisks will increase or decrease depending on the pattern.
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
        printf("*");
    }
    printf("\n");
}
return 0;
}


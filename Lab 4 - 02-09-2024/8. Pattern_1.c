/**
Title: Pattern 1
WAP to print the following pattern
Input: Enter the value of n:5
--------------
Output:
*********
*******
*****
***
*
--------------
*/
#include<stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i, j;
    for(i=n; i>=1; i--) {
        for(j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

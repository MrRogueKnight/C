/**
Title : Maximum Value
WAP to find the largest between three numbers.
Input: Enter three numbers: 80 105 990
Output: The largest number is 990
**/
/*
Syntax used here
if (condition1) {
    // code to execute if condition1 is true
} else if (condition2) {
    // code to execute if condition2 is true
} else if (condition3) {
    // code to execute if condition3 is true
} else {
    // code to execute if none of the above conditions are true
}
*/
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d" "%d" "%d", &num1,&num2,&num3);
    if (num1>num2 && num1>num3){
        printf("The largest number is %d",num1);
    } else if(num2>num3){
        printf("The largest number is %d",num2);
    }
    else{
            printf("The largest number is %d",num3);
    }
getch();
return 0;
}

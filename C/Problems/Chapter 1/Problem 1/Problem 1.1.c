/*
Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary.

Output
Enter Basic Salary of Ramesh: 1200
Basic Salary of Ramesh = 1200.000000
Dearness Allowance = 480.000000
House Rent Allowance = 240.000000
Gross Pay of Ramesh is 1920.000000
*/
#include<stdio.h>
int main(){
    float basic_salary, dearness_allowance, house_rent_allowance,gross_salary;
    printf("Enter Basic Salary of Ramesh:");
    scanf("%f", &basic_salary);
    dearness_allowance = 0.4 * basic_salary;
    house_rent_allowance = 0.2 * basic_salary;
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;
    printf("\nBasic Salary of Ramesh = %f", basic_salary);
    printf("\nDearness Allowance = %f", dearness_allowance);
    printf("\nHouse Rent Allowance = %f", house_rent_allowance);
    printf("\nGross Pay of Ramesh is %f", gross_salary);
    return 0;
}

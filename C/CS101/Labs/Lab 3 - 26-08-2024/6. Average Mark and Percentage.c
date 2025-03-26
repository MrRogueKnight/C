/*
6. WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full mark of each subject is 200. All the input must be given by user.
*/
#include<stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, average, percentage;

    // Ask user for input
    printf("Enter the number of 1st subject: ");
    scanf("%f", &sub1);

    printf("Enter the number of 2nd subject: ");
    scanf("%f", &sub2);

    printf("Enter the number of 3rd subject: ");
    scanf("%f", &sub3);

    printf("Enter the number of 4th subject: ");
    scanf("%f", &sub4);

    printf("Enter the number of 5th subject: ");
    scanf("%f", &sub5);

    // Calculate average
    average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    // Calculate percentage
    percentage = (average / 200) * 100;

    // Display results
    printf("The average is: %.2f\n", average);
    printf("The percentage is: %.2f%%\n", percentage);
    getch();
    return 0;
}

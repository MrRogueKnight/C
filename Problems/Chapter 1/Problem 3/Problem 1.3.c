/*
Problem 1.3
If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks
and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.

Output
Enter marks in 5 subjects: 85 75 60 72 56
Aggregate Marks = 348
Percentage Marks = 69.599998
*/
#include<stdio.h>
int main(){
    float sub1, sub2, sub3, sub4, sub5,Aggregate_Marks,Percentage_Marks;
    printf("Enter marks in 5 subjects: ");
    //scanf("%f", &sub1);scanf("%f", &sub2);scanf("%f", &sub3);scanf("%f", &sub4);scanf("%f", &sub5);
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    Aggregate_Marks = sub1 + sub2 + sub3 + sub4 + sub5;
    Percentage_Marks = Aggregate_Marks/5;
    printf("\nAggregate Marks = %f", Aggregate_Marks);
    printf("\nPercentage Marks = %f", Percentage_Marks);
    return 0;
}

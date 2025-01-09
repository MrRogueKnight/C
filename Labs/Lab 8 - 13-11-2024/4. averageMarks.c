#include <stdio.h>
struct Student {
    char name[50];
    int roll_number;
    int marks[3];
};

float average_marks(struct Student student) {
    return (student.marks[0] + student.marks[1] + student.marks[2]) / 3.0;
}

int main() {
    struct Student students[5];
    int i, j, topStudentIndex = 0;
    float highestAverage = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        for (j = 0; j < 3; j++) {
            printf("Mark for subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    for (i = 0; i < 5; i++) {
        float avg = average_marks(students[i]);
        if (avg > highestAverage) {
            highestAverage = avg;
            topStudentIndex = i;
        }
    }

    printf("\nStudent with the highest average marks:\n");
    printf("Name: %s\n", students[topStudentIndex].name);
    printf("Average Marks: %.2f\n", highestAverage);

    return 0;
}

/**
Output:Enter details for student 1
Name: Abhi
Roll Number: 1
Mark for subject 1: 25
Mark for subject 2: 35
Mark for subject 3: 45
Enter details for student 2
Name: Bob
Roll Number: 2
Mark for subject 1: 50
Mark for subject 2: 24
Mark for subject 3: 56
Enter details for student 3
Name: Jayesh
Roll Number: 27
Mark for subject 1: 56
Mark for subject 2: 75
Mark for subject 3: 80
Enter details for student 4
Name: Manas
Roll Number: 29
Mark for subject 1: 70
Mark for subject 2: 50
Mark for subject 3: 60
Enter details for student 5
Name: Rajesh
Roll Number: 25
Mark for subject 1: 50
Mark for subject 2: 75
Mark for subject 3: 76

Student with the highest average marks:
Name: Jayesh
Average Marks: 70.33
*/

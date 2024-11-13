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

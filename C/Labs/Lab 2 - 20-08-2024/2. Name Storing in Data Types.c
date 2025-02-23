/*
2. WAP to print your name, roll number, branch, marks which are stored in appropriate data
types. [ char name[]=”xyzw”]
*/

#include <stdio.h>
#include <string.h> // Include this header for string functions

// Define the student structure
struct Student {
    char name[50]; // Store student name (up to 50 characters)
    char rollNumber[10]; // Store roll number (up to 10 characters)
    char branch[10]; // Store branch (up to 10 characters)
    float marks; // Store marks (floating-point value)
};

int main() {
    struct Student s; // Create a structure variable for a student

    // Initialize student information
    strcpy(s.name, "Prashant Ranjan"); // Set student name
    strcpy(s.rollNumber, "24MC3035"); // Set roll number
    strcpy(s.branch, "MATHEMATICS AND COMPUTING "); // Set branch
    s.marks = 100.0; // Set marks

    // Display student information
    printf("Name: %s\n", s.name); // Print student name
    printf("Roll Number: %s\n", s.rollNumber); // Print roll number
    printf("Branch: %s\n", s.branch); // Print branch
    printf("Marks: %.2f\n", s.marks); // Print marks with 2 decimal places
    getch();
    return 0; // Exit program
}

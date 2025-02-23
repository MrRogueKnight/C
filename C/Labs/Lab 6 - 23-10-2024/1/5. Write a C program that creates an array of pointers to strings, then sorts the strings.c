/*5. Write a C program that creates an array of pointers to strings, then sorts the strings alphabetically using pointer manipulation.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to sort an array of strings alphabetically
void sortStrings(char *arr[], int n) {
    char *temp;

    // Bubble sort using pointer manipulation
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap the strings if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Allocate an array of pointers to strings
    char *arr[n];
    char buffer[100];  // Buffer for reading input strings

    // Input the strings
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", buffer);            // Read the string into a buffer
        arr[i] = strdup(buffer);        // Duplicate the string to allocate memory
    }

    // Sort the strings alphabetically
    sortStrings(arr, n);

    // Output the sorted strings
    printf("Strings in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);                   // Free the memory allocated for each string
    }

    return 0;
}

/*
Enter the number of strings: 3
Enter 3 strings:
mobile
car
french
Strings in alphabetical order:
car
french
mobile
*/

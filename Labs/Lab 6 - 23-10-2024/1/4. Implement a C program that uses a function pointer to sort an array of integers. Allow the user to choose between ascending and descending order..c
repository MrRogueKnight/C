/*4.Implement a C program that uses a function pointer to sort an array of integers. Allow the user to choose between ascending and descending order.*/
#include <stdio.h>

// Function prototypes for ascending and descending comparisons
int ascending(int a, int b);
int descending(int a, int b);

// Function to sort the array using the chosen comparison function
void sort(int *arr, int size, int (*compare)(int, int)) {
    int temp;

    // Bubble sort using the comparison function pointer
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (compare(arr[j], arr[j + 1])) {
                // Swap if the comparison condition is met
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Comparison function for ascending order
int ascending(int a, int b) {
    return a > b;
}

// Comparison function for descending order
int descending(int a, int b) {
    return a < b;
}

int main() {
    int size, choice;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // User chooses sorting order
    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Declare a function pointer and assign the appropriate comparison function
    int (*compare)(int, int);

    if (choice == 1) {
        compare = ascending;
    } else if (choice == 2) {
        compare = descending;
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Sort the array using the chosen comparison function
    sort(arr, size, compare);

    // Display the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

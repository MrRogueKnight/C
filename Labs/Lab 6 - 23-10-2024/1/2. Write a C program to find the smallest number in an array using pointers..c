/*2. Write a C program to find the smallest number in an array using pointers.*/
#include <stdio.h>

int findSmallest(int *arr, int size) {
    int *min = arr;  // Set the first element as the initial minimum

    // Loop through the array using pointers
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) {
            min = (arr + i);  // Update min if a smaller value is found
        }
    }

    return *min;
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display the smallest number
    int smallest = findSmallest(arr, size);
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}

/*
Enter the size of the array: 5
Enter 5 integers:
45 7 5 8 5
The smallest number in the array is: 5
*/

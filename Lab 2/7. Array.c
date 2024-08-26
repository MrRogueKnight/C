/*
7. WAP to take an integer array of 5 elements and print its value at indices (i) 0, (ii)3, (iii)4
*/
#include <stdio.h>

int main() {
    int myArray[5]; // Declare an integer array of size 5

    // Input 5 integers from the user and store them in the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &myArray[i]);
    }

    // Print the values at specific indices
    printf("Value at index 0: %d\n", myArray[0]);
    printf("Value at index 3: %d\n", myArray[3]);
    printf("Value at index 4: %d\n", myArray[4]);

    return 0;
}

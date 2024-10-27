/*3. Create a C function that takes an array and its size as parameters, then uses pointer arithmetic to reverse the array in place. */
#include <stdio.h>
void reverseArray(int *arr, int size) {
    int *start = arr;             // Pointer to the start of the array
    int *end = arr + size - 1;    // Pointer to the end of the array
    int temp;

    // Swap elements using two pointers until they meet in the middle
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
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

    // Reverse the array
    reverseArray(arr, size);

    // Output the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

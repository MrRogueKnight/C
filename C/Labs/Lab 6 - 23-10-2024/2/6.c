#include <stdio.h>
#include <string.h>

// Recursive function to print reverse of a string
void printReverse(char *str, int index) {
    // Base case: if index is less than 0, stop recursion
    if (index < 0) {
        return;
    }

    // Print the current character
    printf("%c", str[index]);

    // Recursive call with the next character to the left
    printReverse(str, index - 1);
}

int main() {
    char str[100];

    // Get the string input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Call the recursive function with the last index of the string
    printf("Reversed string: ");
    printReverse(str, strlen(str) - 1);
    printf("\n");

    return 0;
}

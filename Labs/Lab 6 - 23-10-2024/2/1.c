#include <stdio.h>
#include <string.h>

// Function prototypes
void reverse(char *str);
int check_char(char *str, char c);

int main() {
    int flag = 0;
    int c;
    char p[] = "Hello world";
    char *q = "MTH409: C program";

    // Print the first string
    printf("Original string: %s\n", p);

    // Reverse the first string
    reverse(p);

    // Print the reversed first string
    printf("Reversed string: %s\n", p);

    // Read a character from the keyboard into variable c
    printf("Enter a character to search: ");
    c = getchar();

    // Check if the character is present in the second string
    flag = check_char(q, c);

    if (flag == 0) {
        printf("The character %c is not present in \"%s\"\n", c, q);
    } else {
        printf("The character %c is present in \"%s\"\n", c, q);
    }

    return 0;
}

// Function to reverse a string
void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to check if a character is present in a string
int check_char(char *str, char c) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            return 1; // Character found
        }
    }
    return 0; // Character not found
}

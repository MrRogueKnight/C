#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH + 1];

    // Take input string from the user
    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    // Convert each character to the opposite case
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    // Print the resulting string
    printf("Output string: %s", str);

    return 0;
}

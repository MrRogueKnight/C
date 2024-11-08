#include <stdio.h>
#include <string.h>

void generateSubsets(char *set, char *current, int index, int n) {
    if (index == n) {
        printf("\"%s\" ", current); // Print the current subset
        return;
    }

    // Include the current character in the subset
    int length = strlen(current);
    current[length] = set[index];
    current[length + 1] = '\0';
    generateSubsets(set, current, index + 1, n);

    // Exclude the current character from the subset (backtrack)
    current[length] = '\0';
    generateSubsets(set, current, index + 1, n);
}

int main() {
    char set[] = "abc";
    int n = strlen(set);
    char current[100] = ""; // Array to store current subset

    printf("Subsets of \"%s\":\n", set);
    generateSubsets(set, current, 0, n);

    return 0;
}

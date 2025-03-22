#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define STR_LENGTH 3 // 2 characters + 1 null terminator

int main() {
    int n;
    char strings[MAX_STRINGS][STR_LENGTH];

    // Read the number of strings
    scanf("%d", &n);

    // Read the strings
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    // Sort the strings lexicographically using the built-in qsort function
    qsort(strings, n, STR_LENGTH, (int (*)(const void *, const void *)) strcmp);

    // Print the sorted strings
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

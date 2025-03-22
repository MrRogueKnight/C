#include <stdio.h>
#include <string.h>

int longestUniqueSubstring(char *str) {
    int n = strlen(str);
    int max_len = 0;
    int start = 0;

    // Array to store the last index of each character
    int last_index[256];
    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;  // Initialize all characters as not seen
    }

    // Traverse the string
    for (int end = 0; end < n; end++) {
        // Update start index of the current window if character is repeated
        if (last_index[(int)str[end]] >= start) {
            start = last_index[(int)str[end]] + 1;
        }

        // Update the last occurrence of the character
        last_index[(int)str[end]] = end;

        // Update maximum length
        int window_len = end - start + 1;
        if (window_len > max_len) {
            max_len = window_len;
        }
    }

    return max_len;
}

int main() {
    char str1[] = "ABDEFGABEF";
    char str2[] = "BBBB";
    char str3[] = "GEEKSFORGEEKS";

    printf("Length of longest unique substring in \"%s\" is %d\n", str1, longestUniqueSubstring(str1));
    printf("Length of longest unique substring in \"%s\" is %d\n", str2, longestUniqueSubstring(str2));
    printf("Length of longest unique substring in \"%s\" is %d\n", str3, longestUniqueSubstring(str3));

    return 0;
}

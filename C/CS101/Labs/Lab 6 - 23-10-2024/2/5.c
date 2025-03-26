#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 30

// Function to find the length of the longest common substring
int longest_common_substring(char *str1, char *str2, int length) {
    int max_len = 0;
    int dp[MAX_LENGTH + 1][MAX_LENGTH + 1] = {0}; // DP array to store lengths of common substrings

    // Fill DP array
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= length; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > max_len) {
                    max_len = dp[i][j];
                }
            }
        }
    }

    return max_len;
}

int main() {
    int L;
    char str1[MAX_LENGTH + 1], str2[MAX_LENGTH + 1];

    // Read input
    scanf("%d", &L);
    scanf("%s", str1);
    scanf("%s", str2);

    // Find and print the length of the longest common substring
    int result = longest_common_substring(str1, str2, L);
    printf("%d\n", result);

    return 0;
}

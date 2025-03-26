#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

// Structure to store character and frequency
typedef struct {
    char character;
    int frequency;
} CharFreq;

// Function to compare CharFreq objects for sorting
int compare(const void *a, const void *b) {
    CharFreq *charFreqA = (CharFreq *)a;
    CharFreq *charFreqB = (CharFreq *)b;

    // Sort by frequency in descending order
    if (charFreqA->frequency != charFreqB->frequency) {
        return charFreqB->frequency - charFreqA->frequency;
    }
    // If frequencies are the same, sort lexicographically by character
    return charFreqA->character - charFreqB->character;
}

int main() {
    int n;
    char input[MAX_LENGTH + 1];
    int frequency[26] = {0}; // To store frequency of each letter (A-Z)

    // Read the length and input string
    printf("Enter length and string: ");
    scanf("%d %s", &n, input);

    // Count frequency of each character
    for (int i = 0; i < n; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            frequency[input[i] - 'A']++;
        }
    }

    // Collect non-zero frequencies into an array of CharFreq
    CharFreq charFreqArray[26];
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            charFreqArray[count].character = 'A' + i;
            charFreqArray[count].frequency = frequency[i];
            count++;
        }
    }

    // Sort the array by frequency and lexicographical order
    qsort(charFreqArray, count, sizeof(CharFreq), compare);

    // Print the results
    for (int i = 0; i < count; i++) {
        printf("%c %d\n", charFreqArray[i].character, charFreqArray[i].frequency);
    }

    return 0;
}

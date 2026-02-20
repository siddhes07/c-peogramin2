#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Helper function to expand around center
void expandAroundCenter(char* s, int left, int right, int* start, int* maxLen) {
    while (left >= 0 && s[right] != '\0' && s[left] == s[right]) {
        left--;
        right++;
    }
    int len = right - left - 1; // Length of palindrome
    if (len > *maxLen) {
        *start = left + 1;
        *maxLen = len;
    }
}

char* longestPalindrome(char* s) {
    int start = 0, maxLen = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        // Odd length palindrome
        expandAroundCenter(s, i, i, &start, &maxLen);
        // Even length palindrome
        expandAroundCenter(s, i, i + 1, &start, &maxLen);
    }

    char* res = (char*)malloc((maxLen + 1) * sizeof(char));
    strncpy(res, s + start, maxLen);
    res[maxLen] = '\0';
    return res;
}

// Example usage
int main() {
    char s[] = "babad";
    char* result = longestPalindrome(s);
    printf("Longest Palindromic Substring: %s\n", result);
    free(result);
    return 0;
}
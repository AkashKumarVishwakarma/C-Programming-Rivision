// Create a program that checks if a given string is a palindrome (the same forwards and backwards) and outputs the result.

#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main() {
    const char *testStr = "racecar";
    if (isPalindrome(testStr)) {
        printf("'%s' is a palindrome.\n", testStr);
    } else {
        printf("'%s' is not a palindrome.\n", testStr);
    }
    return 0;
}
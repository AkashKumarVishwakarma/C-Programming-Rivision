// Write a program to convert a input string to uppercase.

#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100
int main() {
    char str[MAX_LENGTH];

    // Input a string from the user
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Convert each character to uppercase
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = toupper((unsigned char)str[i]);
        }
        // Print the uppercase string
        printf("Uppercase string: %s", str);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
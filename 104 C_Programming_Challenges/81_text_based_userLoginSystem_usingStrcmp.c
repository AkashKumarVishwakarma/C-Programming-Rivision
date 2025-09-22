// Create a simple text-based user login system that compares a stored password string using strcmp.

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main() {
    const char stored_password[] = "securepassword"; // Predefined stored password
    char input_password[MAX_LENGTH];

    // Prompt the user to enter the password
    printf("Enter your password: ");
    if (fgets(input_password, sizeof(input_password), stdin) != NULL) {
        // Remove the newline character from the input if present
        size_t len = strlen(input_password);
        if (len > 0 && input_password[len - 1] == '\n') {
            input_password[len - 1] = '\0';
        }

        // Compare the input password with the stored password
        if (strcmp(input_password, stored_password) == 0) {
            printf("Login successful!\n");
        } else {
            printf("Login failed! Incorrect password.\n");
        }
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
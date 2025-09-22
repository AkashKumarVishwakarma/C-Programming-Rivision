// Create a program using do-while to find password checker until a valid password is entered.

#include <stdio.h>
#include <string.h>
 
int isValidPassword(const char *password) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0;

    if (length < 8) return 0; // Minimum length requirement

    for (int i = 0; i < length; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') hasUpper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z') hasLower = 1;
        else if (password[i] >= '0' && password[i] <= '9') hasDigit = 1;
    }

    return hasUpper && hasLower && hasDigit;
}

int main() {
    char password[100];
    int isValid;

    do {
        printf("Enter a password: ");
        scanf("%99s", password);
        isValid = isValidPassword(password);
        if (!isValid) {
            printf("Invalid password. Please try again.\n");
        }
    } while (!isValid);

    printf("Password is valid.\n");
    return 0;
}
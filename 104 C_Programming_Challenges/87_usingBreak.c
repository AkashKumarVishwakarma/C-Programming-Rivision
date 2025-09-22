// Create a program using break to read inputs from the user in a loop and break the loop if specific keyword (like "exit") is entered.

#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    while (1) {
        printf("Enter something (type 'exit' to quit): ");
        scanf("%99s", input);

        if (strcmp(input, "exit") == 0) {
            printf("Exiting the program.\n");
            break; // Exit the loop if the user types "exit"
        }

        printf("You entered: %s\n", input);
    }

    return 0;
}
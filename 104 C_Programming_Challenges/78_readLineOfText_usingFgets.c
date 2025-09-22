// Read a line of text from the user using fgets and then print it using puts.

#include <stdio.h>
#define MAX_LENGTH 100
int main() {
    char str[MAX_LENGTH];

    printf("Enter a line of text: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        printf("You entered: ");
        puts(str);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}

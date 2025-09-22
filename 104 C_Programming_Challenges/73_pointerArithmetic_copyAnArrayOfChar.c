// Write a function that uses pointer arithmetic to copy an array of char into another.

#include <stdio.h>
#include <string.h>
void copy_array(char *source, char *destination, int size) {
    for (int i = 0; i < size; i++) {
        *destination = *source;
        destination++;
        source++;
        
        // Alternatively, using pointer arithmetic:
        // *(destination + i) = *(source + i);
    }
    // destination[size] = '\0'; // Null-terminate the destination string

    *destination = '\0'; // Null-terminate the destination string
}
int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    int size = strlen(arr);
    char new_arr[size + 1]; // +1 for the null terminator

    copy_array(arr, new_arr, size);

    printf("Original char array: %s\n", arr);
    printf("Copied char array: %s\n", new_arr);

    return 0;
}
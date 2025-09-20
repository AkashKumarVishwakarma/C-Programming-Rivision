// Write a C programe that initializes an unsigned int to its maximum possible value and an int to negative number. Add 1 to both, and print the results to show how the unsigned int wraps around to 0, whereas the int remains negative due to overflow.


#include <stdio.h>
#include <limits.h>
int main() {
    unsigned int u_int_max = UINT_MAX; // Maximum value for unsigned int
    int int_normal = INT_MAX;

    printf("Max value of unsigned int: %u\n", u_int_max);
    printf("Max value of normal int: %d\n", int_normal);

    u_int_max += 1; // Adding 1 to unsigned int
    int_normal +=1; // Adding 1 to int

    printf("Unsigned int after adding 1: %u\n", u_int_max); // Should wrap around to 0
    printf("Normal Int after adding 1: %d\n", int_normal);

    return 0;
}
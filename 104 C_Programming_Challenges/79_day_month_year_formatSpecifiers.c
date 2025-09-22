// Use printf with format specifiers to format and print a date string (day, month, year).

#include <stdio.h>
int main() {
    int day, month, year;

    // Input date components
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year (e.g., 2023): ");
    scanf("%d", &year);

    // Print the date in different formats
    printf("Date in DD/MM/YYYY format: %02d/%02d/%04d\n", day, month, year);
    printf("Date in MM-DD-YYYY format: %02d-%02d-%04d\n", month, day, year);
    printf("Date in YYYY.MM.DD format: %04d.%02d.%02d\n", year, month, day);

    return 0;
}
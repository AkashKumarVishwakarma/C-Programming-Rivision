// Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.

#include <stdio.h>

int main() {
    const double MILE_PER_KM = 0.621371;
    long long kilometers;

    printf("Enter distance in kilometers: ");
    scanf("%lld", &kilometers);

    double miles = kilometers * MILE_PER_KM;

    printf("Distance in miles: %.2f\n", miles);

    return 0;
}
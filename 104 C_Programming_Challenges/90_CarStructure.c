// Define a Car structure with fields for make, model, year, and color.

#include <stdio.h>

int main() {
    // Define the Car structure
    struct Car {
        char make[50];
        char model[50];
        int year;
        char color[30];
    };

    // Create and initialize an array of Car structures using designated initializers
    struct Car garage[3] = {
        {.make = "Toyota", .model = "Camry", .year = 2020, .color = "Blue"},
        {.make = "Honda", .model = "Civic", .year = 2019, .color = "Red"},
        {"Ford", "Mustang", 2021, "Black"}
    };

    // Display the car details
    for (size_t i = 0; i < 3; i++) {
        printf("Car %zu Details:\n", i + 1);
        printf("Make: %s\n", garage[i].make);
        printf("Model: %s\n", garage[i].model);
        printf("Year: %d\n", garage[i].year);
        printf("Color: %s\n\n", garage[i].color);
    }

    return 0;
}
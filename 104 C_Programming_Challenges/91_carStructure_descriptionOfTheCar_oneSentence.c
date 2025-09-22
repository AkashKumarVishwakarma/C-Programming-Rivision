// Pass a Car structure to a function that prints out a description of the car in one complete sentence.

#include <stdio.h>

// Define the Car structure
struct Car {
    char make[50];
    char model[50];
    int year;
    char color[30];
};

// Function to print a description of the car
void describeCar(struct Car car) {
    printf("This %s model of car, which is of %s color, was purchased in %d year, and is made by %s company.\n", car.model, car.color, car.year, car.make);
}

int main() {
    // Create and initialize a Car structure
    struct Car myCar = {"Tesla", "Model-3", 2021, "White"};

    // Call the function to describe the car
    describeCar(myCar);

    return 0;
}

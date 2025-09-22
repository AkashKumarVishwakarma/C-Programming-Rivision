// Create a program that dynamically allocates memory for a Car structure and then free it at the end of the program.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define the Car structure
    struct Car {
        char make[50];
        char model[50];
        int year;
        float price;
    };

    // Dynamically allocate memory for a Car structure
    struct Car *myCar = (struct Car *)malloc(sizeof(struct Car));
    if (myCar == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // // Initialize the Car structure
    // snprintf(myCar->make, sizeof(myCar->make), "Toyota");
    // snprintf(myCar->model, sizeof(myCar->model), "Camry");
    // myCar->year = 2020;
    // myCar->price = 24000.00;

    printf("Please, enter your car model: ");
    scanf("%49s", myCar->model);
    printf("Now, enter your car company: ");
    scanf("%49s", myCar->make);
    printf("Now, enter your car year: ");
    scanf("%d", &myCar->year);
    printf("Finally, enter your car price: ");
    scanf("%f", &myCar->price);

    // Print the Car information
    printf("This %s model of car, which was purchased in %d year, and is made by %s company, that costs $%.2f.\n",
           myCar->model, myCar->year, myCar->make, myCar->price);

    // Free the allocated memory
    free(myCar);
    myCar = NULL; // Set pointer to NULL after freeing

    return 0;
}
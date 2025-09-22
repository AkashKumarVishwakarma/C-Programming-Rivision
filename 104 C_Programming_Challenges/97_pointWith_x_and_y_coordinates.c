// Allocate memory for a struct representing a point with x and y coordinates, set some values, and then properly deallocate the memory using free.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

void input_point(Point*);
void print_point(Point*);

int main() {
    printf("Wellcome to dynamic pointers\n");
    Point *start = (Point*) malloc(sizeof(Point));
    Point *end = (Point*) malloc(sizeof(Point));

    if(start == NULL || end == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }


    printf("\nPlease enter the details for starting point of your line: ");
    input_point(start);
    printf("\nNow enter the details for ending point of your line: ");
    input_point(end);

    printf("Now here are the details of your line:\n");
    print_point(start);
    print_point(end);

    // Free the allocated memory
    free(start);
    free(end);
    start = NULL; // Set pointer to NULL after freeing
    end = NULL;   // Set pointer to NULL after freeing


    return 0;
}

void input_point(Point *point){
    printf("\nEnter x coordinate: ");
    scanf("%d", &point->x);
    printf("Enter y coordinate: ");
    scanf("%d", &point->y);

}
void print_point(Point *point){
    printf("Point coordinates are: (%d, %d)\n", point->x, point->y);


}
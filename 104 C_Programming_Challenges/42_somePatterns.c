// Create a programe that print patterns.
// 1) Right Triangle
// *
// **
// ***
// ****

// #include <stdio.h>

// int main() {
//     int rows;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// 2) Inverted Right Triangle
// ****
// ***
// **
// *

// #include <stdio.h>
// int main() {
//     int rows;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (int i = rows; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }



// 3) Left Half Pyramid
//    *
//   **
//  ***
// ****


#include <stdio.h>
int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
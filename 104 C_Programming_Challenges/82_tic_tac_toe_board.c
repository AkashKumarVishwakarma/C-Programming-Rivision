// Use a 2-D character array to store and display a tic-tac-toe board.

#include <stdio.h>
#define SIZE 3
void displayBoard(char board[SIZE][SIZE]) {
    printf("Current Tic-Tac-Toe Board:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) {
            for (int k = 0; k < SIZE; k++) {
                printf("---");
                if (k < SIZE - 1) printf("+");
            }
            printf("\n");
        }
    }
}
int main() {
    char board[SIZE][SIZE] = {
        {'X', 'O', 'X'},
        {' ', 'X', 'O'},
        {'O', ' ', ' '}
    };

    displayBoard(board);
    return 0;
}
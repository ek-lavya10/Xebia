#include <stdio.h>
#include <string.h>

void displayBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        if (i < 2) printf("\n---+---+---\n");
    }
    printf("\n");
}

int checkWinner(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;
    return 0;
}

int isDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return 0;
        }
    }
    return 1;
}

int main() {
    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    int player = 1;
    int choice;
    char mark;
    int row, col;

    printf("Welcome to Tic Tac Toe!\n");
    displayBoard(board);

    while (1) {
        mark = (player == 1) ? 'X' : 'O';
        printf("Player %d (%c), enter your move (1-9): ", player, mark);
        scanf("%d", &choice);

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        board[row][col] = mark;
        displayBoard(board);

        if (checkWinner(board)) {
            printf("Player %d (%c) wins! Congratulations!\n", player, mark);
            break;
        }

        if (isDraw(board)) {
            printf("It's a draw! Well played!\n");
            break;
        }

        player = (player == 1) ? 2 : 1;
    }

    return 0;
}
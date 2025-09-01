#include <stdio.h>

char board[3][3];
char currentPlayer;

void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = '1' + i * 3 + j;
}

void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i < 2)
            printf("\n---|---|---\n");
    }
    printf("\n\n");
}

int isValidMove(int choice) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    return board[row][col] != 'X' && board[row][col] != 'O';
}

void makeMove(int choice) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    board[row][col] = currentPlayer;
}

int checkWinner() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
            return 1;
    }

    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        return 1;

    return 0;
}

int isBoardFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
    return 1;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    int choice;
    int gameOver = 0;

    initializeBoard();
    currentPlayer = 'X';

    while (!gameOver) {
        printBoard();
        printf("Player %c, enter your move (1-9): ", currentPlayer);
        scanf("%d", &choice);

        if (choice < 1 || choice > 9 || !isValidMove(choice)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        makeMove(choice);

        if (checkWinner()) {
            printBoard();
            printf("Player %c wins!\n", currentPlayer);
            gameOver = 1;
        } else if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            gameOver = 1;
        } else {
            switchPlayer();
        }
    }

    return 0;
}


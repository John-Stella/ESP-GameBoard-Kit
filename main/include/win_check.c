/*
*   win_check.c - Tests the state of the tic tac toe game board and determines if there is a winner.
*
*/
#include <stdint.h> // For int32_t type
#include "win_check.h"

// This macro checks if three positions in the board array form a winning line.
// It takes the board array and three indices as arguments.
#define WIN_LINE(board, i, j, k) ((board[i]) != 0 && (board[i]) == (board[j]) && (board[i]) == (board[k]))

// This function checks the entire board for a winner using the WIN_LINE macro.
// It takes an int32_t array representing the board state as input.
int32_t check_win_macro(int32_t *board) {
    if (WIN_LINE(board, 0, 1, 2)) return board[0]; // Top row
    if (WIN_LINE(board, 3, 4, 5)) return board[3]; // Middle row
    if (WIN_LINE(board, 6, 7, 8)) return board[6]; // Bottom row
    if (WIN_LINE(board, 0, 3, 6)) return board[0]; // Left column
    if (WIN_LINE(board, 1, 4, 7)) return board[1]; // Middle column
    if (WIN_LINE(board, 2, 5, 8)) return board[2]; // Right column
    if (WIN_LINE(board, 0, 4, 8)) return board[0]; // Diagonal TL-BR
    if (WIN_LINE(board, 2, 4, 6)) return board[2]; // Diagonal TR-BL
    return 0; // No winner
}

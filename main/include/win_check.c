/*
*   win_check.c - Tests the state of the tic tac toe game board and determines if there is a winner.
*
*/

#include "win_check.h"

// This function checks the game board for a winner using macros to simplify the code.
// It checks a specified pattern and returns the winner's value (1 or 2) if found.
// If no winner is found, it returns 0.
#define WIN_LINE(a, b, c) ((a) != 0 && (a) == (b) && (a) == (c))

// This function checks the game entire board for a winner using the WIN_LINE macro.
int check_win_macro(int b0, int b1, int b2, int b3, int b4, int b5, int b6, int b7, int b8) {
    if (WIN_LINE(b0, b1, b2)) return b0; // Top row
    if (WIN_LINE(b3, b4, b5)) return b3; // Middle row
    if (WIN_LINE(b6, b7, b8)) return b6; // Bottom row
    if (WIN_LINE(b0, b3, b6)) return b0; // Left column
    if (WIN_LINE(b1, b4, b7)) return b1; // Middle column
    if (WIN_LINE(b2, b5, b8)) return b2; // Right column
    if (WIN_LINE(b0, b4, b8)) return b0; // Diagonal TL-BR
    if (WIN_LINE(b2, b4, b6)) return b2; // Diagonal TR-BL
    return 0; // No winner
}

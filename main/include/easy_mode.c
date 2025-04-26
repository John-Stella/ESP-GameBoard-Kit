/*
*   Implementation of the easy mode for the TIC TAC TOE game.
*   This file contains the logic for the easy mode of the game, where the cpu makes random moves.
*   The cpu will select a random empty cell on the board to make its move.
*/
#include <stdlib.h> // For rand() function
#include <stdint.h> // For int32_t type
#include "easy_mode.h"
#include "EEZ/vars.h"

// forward declaration of the check_board_full function
static bool check_board_full(int32_t *board);

void easy_turn(int32_t *board) {
    // Set the cpu player to 2 (O)
    int32_t cpu_player = true;

    // Check if the board if full
    if (check_board_full(board)) {
        return; // No moves possible
    }

    // Generate a random move for the cpu
    int move = rand() % 9; // Random number between 0 and 8
    while (board[move] != 0) { // Check if the cell is already occupied
        move = rand() % 9; // Generate a new random move
    }

    // Update the button state for the move

    switch (move) {
        case 0: set_var_reqst_1(cpu_player); break;
        case 1: set_var_reqst_2(cpu_player); break;
        case 2: set_var_reqst_3(cpu_player); break;
        case 3: set_var_reqst_4(cpu_player); break;
        case 4: set_var_reqst_5(cpu_player); break;
        case 5: set_var_reqst_6(cpu_player); break;
        case 6: set_var_reqst_7(cpu_player); break;
        case 7: set_var_reqst_8(cpu_player); break;
        case 8: set_var_reqst_9(cpu_player); break;
    }
}

// Function to check if the board is full, function is static to limit scope
static bool check_board_full(int32_t *board) {
    for (int i = 0; i < 9; i++) {
        if (board[i] == 0) {
            return false; // Found an empty cell
        }
    }
    return true; // No empty cells found, board is full
}
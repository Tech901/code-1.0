/*
This example shows:

1. How to use a doubly-subscripted array
   as a matrix.
2. How to use multiple files to implement
   a project.

Compile with: clang matrix.c main.c -o main -lcs50

*/
#define NUM_ROWS 2
#define NUM_COLS 2

#include <stdio.h>
#include "matrix.h"

int main(void) {
    // Initialize every entry/value to zero.
    reset_matrix(NUM_ROWS, NUM_COLS);

    // call the function to print our matrix
    print_matrix(NUM_ROWS, NUM_COLS);

    // Ask the user to enter values for the matrix
    user_input(NUM_ROWS, NUM_COLS);
    print_matrix(NUM_ROWS, NUM_COLS);

} // end of main()

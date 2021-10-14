/*
These are some tools for dealing
with a matrix.
*/

// Define the size of the matrix
#ifndef NUM_ROWS
#define NUM_ROWS 3
#endif

#ifndef NUM_COLS
#define NUM_COLS 3
#endif

// The matrix itself.
// int matrix[rows][columns];
int matrix[NUM_ROWS][NUM_COLS]; // Global variable.

/*
      0  1  2 - columns
rows----------
  0 |  |  |  |
    ----------
  1 |  |  |  |
    ----------
  2 |  |  |  |
    ----------
*/

// A function to print each item in the matrix.
void print_matrix(int rows, int columns);

// A function to reset every value in the matrix to zero.
void reset_matrix(int rows, int columns);

// A function that prompts the user to input values.
void user_input(int rows, int columns);


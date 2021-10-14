#include <stdio.h>
#include <cs50.h>
#include "matrix.h"


// A function to set all values of the matrix
// to zero.
void reset_matrix(int rows, int columns)
{
    for(int row=0; row < rows; row++) // every row
    {
        for(int col=0; col < columns; col++) // every column
        {
            matrix[row][col] = 0;
        }
    }
}

// Print our global matrix's contents
void print_matrix(int rows, int columns)
{
    for(int row=0; row < rows; row++) // every row
    {
        for(int col=0; col < columns; col++) // every column (in a row)
        {
            printf("%3i | ", matrix[row][col]);
        }
        printf("\n");
    }
    // no return
}

// Prompt the user to input values for the matrix
void user_input(int rows, int columns)
{
    for(int i=0; i < rows; i++) // each row
    {
        for(int c=0; c < columns; c++) // each column
        {
            matrix[i][c] = get_int("Enter a value for (%i, %i): ", i, c);
        }
    }
}

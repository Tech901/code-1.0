/*
 * Here's an example of a program that prints a grid of content.
 * Download this, build it & run it to see how it works. 
 */
#include <stdio.h>

int main(void) {

    // Here are variables that specify the size of the grid (the
    // total number of rows & columns).
    int rows = 3;
    int columns = 3;

    // You can use nested for-loops to generate the grid. Note that the
    // outer for-loop controls the current row, while the inner for-loop
    // controls the columns.
    for(int row=0; row < rows; row++) {
        for(int col=0; col < columns; col++) {

            // This will print a "cell" in the grid, i.e. the (row, col)
            // are coordinates for each item in the grid.
            //
            // This will print something like: | (0, 1) | 
            // NOTE: there's no newline character, here!
            printf("| (%i, %i) |", row, column);
        }

        // After we've printed every row, we *then* print a newline to
        // start the next row.
        printf("\n");
    }
    return 0;
}

/*
 * Q: What are arrays?
 * A: A place to store multiple values.
 */

#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int scores[5];  // Array of integers, it can hold 5 values

    /* Think of this like a block of consecutive storage bins:
     *
     * ---------------------
     * |100| 90| 50|  2|  0|   <-- memory locations for integer values
     * ---------------------
     *    0   1   2   3   4    <-- positions or indexes for each value
     */


    // We want to prompt the user to input data, then store each score
    // in a position in the array.
    int i = 0;
    do
    {
        scores[i] = get_int("Score: ");  // read: scores of i
        i = i + 1;
    } while(i < 5);  // i < 5, because there are only 5 slots in the array.

    // Now, just print the scores that were entered.
    printf("You entered: ");
    for(int j=0; j < 5; j++)  // j < 5, because there are 5 slots in the array
    {
        printf("%i, ", scores[j]);
    }
    printf("\n");

    // Calculate a mean (avg) -- add them up and divide by 5 (number of scores)
    int sum = 0;
    for(int j=0; j < 5; j++) // j < 5, because there are 5 slots in the array
    {
        sum = sum + scores[j];
    }

    float result = (float)sum / 5; // note we cast the sum to float
    printf("AVG: %.2f\n", result); // %.2f gives us output with 2 decimal places
}

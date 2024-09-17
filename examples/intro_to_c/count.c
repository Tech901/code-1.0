/*
 * Our count.py program, implemented in C!
 */
#include <stdio.h>
#include <cs50.h>  // CS50-specific tools!
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Investigating argc & argv;
    // argc is the number of elements in the argv array.
    printf("argc = %i\n", argc);
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);

    int number = atoi(argv[1]);  // convert the 1st argument to an int
    printf("Counting to: %i\n", number);

    // Count using a for-lop
    // 1. Before the for loop begins, we run: int i=0;
    // 2. During every iteration of the loop:  i < number;
    // 3. At the end of each iteration: i++ or i = i + 1;
    /*
    for(int i=0; i < number; i++)
    {
       // the body of our for-loop
       printf("- %i\n", i);
    }
    */

    // Or, count using a while loop.
    int i = 0;
    while(i < number)
    {
        // The body of the while loop
        printf("- %i\n", i);
        i++; // ++ is the increment operator.
    }
    return 0;
}
/**
 * Illustrating the modulo (mod: %) operator.
 *
 * With examples taken from:
 * https://cs50.harvard.edu/x/notes/1/#more-examples
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x & y,
    // the perform a mod with those numbers
    /*
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("x mod y = %d\n", x % y);
    */

    // Another example
    int mod = 2; // Try changing to 3 or 4 & see what happens.
    for(int i=0; i <= 10; i++) {
        printf("%d mod %d = %d\n", i, mod, i % mod);
    }
}
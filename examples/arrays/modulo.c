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
    int value = get_int("Enter a number: ");

    for(int i=0; i <= 10; i++) {
        printf("%d mod %d = %d\n", i, value, i % value);
    }
}

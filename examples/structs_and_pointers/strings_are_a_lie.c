/**
 * Adapted from sample code in CS50's lecture 3:
 * https://cs50.harvard.edu/x/notes/3
 *
 * This program illustrates that strings are stored
 * at different memory locations, and that equality
 * cannot be used to compare the values at those locations.
 *
 * Originally posted at:
 * https://gist.github.com/bradmontgomery/9a2192145d7be82affb6260ceb3da741
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get two strings
    // We've been using "string" as a data type, but that's really: char*
    // char* is a pointer to a character.
    char* a = get_string("a: ");
    char* b = get_string("b: ");

    printf("a = %s -> %p\n", a, a);
    printf("b = %s -> %p\n", b, b);

    // Compare strings???
    if (a == b)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}

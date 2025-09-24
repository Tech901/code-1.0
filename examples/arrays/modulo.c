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
    // Ask the user for a number...
    int value = get_int("Enter a number: ");

    // What is the behavior of the mod operator?
    for(int i=0; i <= 10; i++) {
        printf("%d mod %d = %d\n", i, value, i % value);
    }


    // How does mod impact the *index* when looking up items in an array?
    /*
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                      'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for(int i=0; i < 26; i++) {
        if(i % value == 0) {
            printf("%c, ", letters[i]);
        }
        printf("\n");
    }
    */
}

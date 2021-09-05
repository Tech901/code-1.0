/**
 * Example code using command line arguments;
 * Starting from: https://cs50.harvard.edu/x/notes/2/#command-line-arguments
 *
 * And illustrating some array-like features of strings:
 * https://cs50.harvard.edu/x/notes/2/#strings
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    printf("received arguments (argc): %d\n", argc);
    for(int i=0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    // You can treat a string like an array.
    // Print the index of each character given
    // in the first argument given to the program.
    if(argc == 1) {
        printf("We need another argument!\n");
        return 1; // tells the OS there's an error.
    } else{
        string word = argv[1];
        for(int i=0; i < strlen(word); i++) {
            // Print the index, each character, AND
            // it's ASCII value...
            printf("%i -> %c -> %i\n", i, word[i], word[i]);
        }
    }

    return 0; // all is well! I finished my job successfully.
}
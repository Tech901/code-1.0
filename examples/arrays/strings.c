/**
 * Example code using command line arguments;
 * See: https://cs50.harvard.edu/x/2021/notes/2/#command-line-arguments
 *
 * And illustrating some array-like features of strings:
 * https://cs50.harvard.edu/x/2021/notes/2/#strings
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>


/*
 argc - A count of the arguments provided to the program.
       - aka: the length of argv
 argv[] - An array of all arguments provided on the command line
*/

int main(int argc, string argv[])
{
    // What is argc?
    printf("argc = %i\n", argc);

    // Print the items contained in the argv array?
    for(int i=0; i < argc; i++)
    {
        printf("%i - %s\n", i, argv[i]);
    }
    // note: (argc - 1) is the last item in argv
    printf("Last item? %s\n", argv[argc - 1]);

    // You can treat a string like an array.
    // Print the index of each character given
    // in the first argument given to the program.
    if(argc == 1) {
        printf("We need another argument!\n");
        return 1; // tells the OS there's an error.
    }

    // Capture the argument and store it in a more readable variable.
    string word = argv[1];

    for(int i=0; i < strlen(word); i++) {
        // Print the index, each character, AND
        // it's ASCII value...
        printf("%i -> %c -> %i\n", i, word[i], word[i]);
    }

    return 0; // all is well! I finished my job successfully.
}

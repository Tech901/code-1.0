/**
 *  This is an example of a C program that reads lines of text from a file
 *  using the fscanf function.
 *
 *  For more information, see:
 *  https://www.tutorialspoint.com/c_standard_library/c_function_fscanf.htm
 *  
 *  Example usage: ./read_file words.txt
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_SIZE 100

int main(int argc, char** argv) {

    if(argc != 2) {
        printf("Usage: ./read_file <filename>\n");
        return 1;
    }

    char *filename = argv[1];
    FILE *file = fopen(filename, "r"); // open for reading

    // We can use an array of chars to hold a word
    // Arrays are easier than pointers, so use them when you can!
    char word[MAX_WORD_SIZE];

    // fscanf will read the file until it reaches the (End Of File)
    //
    // This example uses '%s' as a formatter, so it will stop reading after
    // every whitespace in the file (e.g. spaces, newlines, etc)
    while(fscanf(file, "%s", word) != EOF) {

        printf("Read: %s\n", word);

    }

    return 0;
}

/**
 * A simple hash function for arbitrary ASCII strings
 */
#include <stdio.h>
#include <ctype.h>

int hash(const char* word) {
    // TODO: given a word, return an integer.
    return tolower(word[0]) - 'a';
}


int main(int argc, char** argv) {
    if(argc != 2) {
        printf("Usage: ./hash word\n");
    }

    char *word = argv[1];
    int x = hash(word);

    printf("word: %s -> %i\n", word, x);
}

#include <stdio.h>
#include <cs50.h>

// Hey, this is a comment.
int main(void) {

    int number = 3; // this is how you define an integer'
    char letter = 'a';  // this is a character type
    float value = 3.14; // this is a float

    string name = get_string("What is your name?\n");
    printf("Hello %s your number is %i\n", name, number);

    // printing stuff out with format specifiers (like %s)
    printf("letter = %c and value = %f\n", letter, value);
    printf("letter = %c, but also %d\n", letter, letter);
    printf("103 is actually letter: %c\n", 103);

    // The for loop
    for(int i=0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    // A for loop INSIDE a for loop
    for(int row=0; row < 5; row++) {
        for(int col=0; col < 3; col++) {
            printf(" (%d, %d) |", row, col);
        }
        printf("\n");
    }

}

/*
 This is multi-line comment.
 Everything until the closing comment
 will be ignored by the compiler.
*/

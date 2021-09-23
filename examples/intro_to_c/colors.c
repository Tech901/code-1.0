/*
Let's comment on your favorite color.
*/
#include <cs50.h>
#include <stdio.h>

// Global variables
int RED = 1;
int PURPLE = 2;
int YELLOW = 3;
int GREEN = 4;
int BROWN = 5;
int BLACK = 6;
int ORANGE = 7;
int BLUE = 8;

int isPrimary(int color); // function prototype or signature

int main(void)
{
    printf("1. red\n2. purple\n3. yellow\n4. green\n5. brown\n");
    printf("6. black\n7. orange\n8. blue\n");

    // assume the user enters a lower-case string.
    int color = get_int("What is your favorite color? ");

    // boolean expressions... true or false
    // || is an OR comparison
    if(isPrimary(color)) {
        printf("That's a primary color!\n");
    }
    else if (color == RED && color == BROWN) // logical AND
    {
        printf("WHAT!?\n");  // this can never happen.
    }
    else {
        printf("%i is a pretty color\n", color);
    }
}

// Function implementation (the body of the function)
int isPrimary(int color)
{
    if (color == RED || color == BLUE || color == YELLOW) {
        return 1; // true
    }
    return 0; // false
}

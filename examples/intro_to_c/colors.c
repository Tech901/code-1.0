/*
This is a program that will make comments on your favorite color!

It illustrates a couple of new concepts:

1. More complext boolean logic (with the AND and OR operators: &&, ||)
2. Custom functions! See the isPrimary, and colorToString functions below.
3. The colorToString also illustrates one possible use case for a switch statement

*/
#include <cs50.h>
#include <stdio.h>

// Global variables.
// These are declared outside the main function so that they're "visible"
// inside each of the functions. They are also declared as "const" because the
// values of each variable cannot change.
const int RED = 1;
const int PURPLE = 2;
const int YELLOW = 3;
const int GREEN = 4;
const int BROWN = 5;
const int BLACK = 6;
const int ORANGE = 7;
const int BLUE = 8;


// Function Prototypes (or signatures)
int isPrimary(int color);  // Determine if a given color is a Primary color.
string colorToString(int color); // Return a string name for a numeric color

// The main program.
int main(void)
{

    // Print a menu of color options.
    printf("1. red\n2. purple\n3. yellow\n4. green\n5. brown\n");
    printf("6. black\n7. orange\n8. blue\n");

    // Capture the numeric option representing a color from the user.
    int color = get_int("What is your favorite color? ");

    // Comment on the user's selected color.
    if(isPrimary(color)) {
        printf("Nice! %s is a primary color!\n", colorToString(color));
    }
    else if (color == RED && color == BROWN)
    {
        // This can never happen. A color cannot be BOTH red and brown
        // at the same time.
        printf("WHAT!?\n");
    }
    else {
        // Use our colorToString function to convert the integer color value
        // into a string.
        printf("%s is a pretty color\n", colorToString(color));
    }
}

// Below are the Function implementations (i.e. the body of our custom functions)

int isPrimary(int color)
{
    if (color == RED || color == BLUE || color == YELLOW) {
        return 1; // true
    }
    return 0; // false
}

string colorToString(int color)
{
    // See the syntax for a switch statement:
    // https://www.tutorialspoint.com/cprogramming/switch_statement_in_c.htm
    switch(color)
    {
        case RED:
            return "red";
        case PURPLE:
            return "purple";
        case YELLOW:
            return "yellow";
        case GREEN:
            return "green";
        case BROWN:
            return "brown";
        case BLACK:
            return "black";
        case ORANGE:
            return "orage";
        case BLUE:
            return "blue";
        default:
            return "that";
    }
}

#include <stdio.h>
#include <cs50.h>  // NOT part of standard C...


// C: A statically typed language.
// main returns an integer data type.
int main(void)  // -- Takes no inputs.
{
    // Variables.
    // <data type> <variable name> = <value>;
    int age; // we do not initialize this variable.
    const float pi = 3.14;  // Constant values cannot be changed.
    char letter = 'a';
    bool isFun = true;

    // Strings are a lie.
    string name = get_string("What is your name? ");
    age = get_int("How old are you? ");

    // Printing variable contents:
    // python code:  print(f"Hello {name}") <--- string interpolation.
    // Replace %s with the contents of the variable `name`
    printf("Hello %s\n", name);
    printf("Age is %i,\n PI is %f,\n and this \n\n is the letter %c\n", age, pi, letter);
    printf("The bool is %i\n", isFun);

    // Make some decisions.
    // && -- logical AND.
    // || -- logical OR
    if (age >= 100 && pi > 3)
    {
        printf("Wooooo that's old\n");
    }
    else if (age >= 50 || age == 46)  // elif is not a thing in C!
    {
        printf("I'm in my prime\n");
    }
    else
    {
        printf("Good to be young!\n");
    }

    // Loops...
    int count = 1;
    while (count <= 5)
    {
        printf("- %i\n", count);
        count++;
    }

    // 3 parts:
    // 1. Where do we start?
    // 2. When do we end?
    // 3. What should we do AFTER every iteration?
    // i++
    // i = i + 1
    for (int i=1; i <= age; i++)
    {
        printf("%i bottles of b**r on the wall...\n", i);
    }


    // For-loops inside for-loops; aka working on a grid.
    for (int row=0; row < 4; row++)
    {
        for (int column=0; column < 4; column++)
        {
            printf("| (%i, %i) ", row, column);
        }
        printf("\n");
    }


    return 0; // (optional) Good!

    // Convention:
    // * return 0 -- my program ends successfully.
    // * return 1 -- my program ends with an error.
}

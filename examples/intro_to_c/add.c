/**
 * This is a simple program that illustrates how to
 * create a function that adds two numbers & returns
 * a result.
 */

#include <stdio.h>
#include <cs50.h>

// Function prototype / header
int sum(int a, int b);

int main(void)
{
    int x = get_int("Enter a number: ");
    int y = get_int("Enter another number: ");

    int result = sum(x, y); // Compute the sum

    printf("The sum of %i and %i = %i\n", x, y, result);
}


// <return type> <function name> (<input type> <variable_name>, ...)
int sum(int a, int b)
{
    int temp = a + b;
    return temp;
}


/*
 *  This is your main program. Compile it with:
 *    gcc -o main main.c functions.c  -lcs50
 * or
 *    clang -o main main.c functions.c -lcs50
 *
 * Read more at:
 * https://www.tutorialspoint.com/cprogramming/c_header_files.htm
 */
#include <stdio.h>
#include <cs50.h>
#include "functions.h"

int main(void) {

    int value = get_int("Enter an integer: ");
    int result = doubleValue(value);

    printf("%i doubled is now: %i\n", value, result);

    result = multiply(value, 3);
    printf("%i * 3 is: %i\n", value, result);

    return 0;
}
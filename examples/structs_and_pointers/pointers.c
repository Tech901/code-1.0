/* Pointers!
 *
 * Address of and value at...
 *
 * See this great stack overflow answer for an additional
 * discussion on the topic.
 *
 * https://stackoverflow.com/a/2094715/182778
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 42;  // A plain old integer.
    int *p = &i; // A pointer to i's address.

    // Let's see some info about the integer's memory address & value.
    printf("--- i is an integer ---\n");
    printf("The value stored at:     i = %d\n", i);
    printf("It's memory address is: &i = %p\n", &i);

    // Now, what about p?
    printf("\n--- p is a pointer to an integer (i) ---\n");
    printf("At memory address: p = %p\n", p);
    printf("The value that p points to is: %d\n", *p);

    // You can change the value of p!
    *p = 5;
    printf("After running *p = 5\n");
    printf("*p = %d\n", *p);
    printf(" p = %p\n", p);
    printf("&i = %p\n", &i);
    printf("     ^^^^^^^^^^^^^^ are these the same?\n\n");
    printf("But what is i?\n");
    printf(" i = %d\n", i);

    printf("* Gives you the value at a pointer\n");
    printf("& Gives you the address of a variable.\n\n");

    return 0;
}
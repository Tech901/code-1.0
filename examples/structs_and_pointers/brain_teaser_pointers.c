/**
 *
 * Pointers are powerful! But don't forget...
 * with great power comes great responsibility!
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=0; i < 10000000; i++) {

        *&i = 10;
    }
    printf("i = %i\n", i);
    return 0;
}

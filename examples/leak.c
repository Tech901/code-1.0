/*
 * How to build a MEMORY LEAK!!!!
 *
 * Run this, but watch your memory usage on your computer.
 * Be sure to keep Ctrl-C handy.
 *
 * Note: As of late 2019 this stopped working, and it seems the OS will
 * prevent this from eating up too much memory.
 *
 */
#include <stdlib.h>

int main(void)
{

    char *s;
    while(1) {
        s = malloc(sizeof(char) * 1000);

    }
}

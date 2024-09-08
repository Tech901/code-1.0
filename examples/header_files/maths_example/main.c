#include <stdio.h>
#include <stdlib.h>
#include "maths.h"

int main() {

    int result = 0;

    printf("Hello!\n");

    result = sum(3, 5);
    printf("3 + 5 = %i\n", result);

    return 0;
}
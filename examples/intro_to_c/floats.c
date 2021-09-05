/**
 * This program illustrates the problem with floating point arithmetic
 * (relevant for the Cash assignment)
 */

#include <stdio.h>

int main(void) {
    int i = 0;
    float value = 10;
    printf("%d: %f\n", i, value);

    while(value > 0) {
        value = value - 0.1;
        printf("%d: %f\n", i, value);
        i++;
    }
    return 0;
}

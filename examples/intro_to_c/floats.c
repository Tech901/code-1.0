/*

This program illustrates a problem with
float point arithmetic in C.

*/

#include <stdio.h>

int main(void)
{
    int counter = 0; // counter variable.
    float value = 10;

    printf("%i: %f\n", counter, value);

    while (value > 0)
    {
        value = value - 0.1;
        if(value >= 0.1) {
            printf("%i: %.1f\n", counter, value);
        } else {
            printf("%i: %.8f\n", counter, value);
        }

        counter++;
    }

    // Thinking in terms of dollars.
    float money1 = 0.27;
    float money2 = 12.32;
    printf("(float) money1 = %f, money2 = %f\n", money1, money2);

    // Think in terms of cents.
    int money3 = 27;
    int money4 = 1232;

    // Goal: Show the above as dollars & cents.
    // type coercion -- (int / float = float)
    printf("(int) money3 = %.2f, money4 = %.2f\n", money3 / 100.0, money4 / 100.0);

    // type casting -- we explicitly tell the compiler to treat something as a float
    printf("(int) money3 = %.2f, money4 = %.2f\n",  ((float) money3 / 100), ((float) money4 / 100));

}

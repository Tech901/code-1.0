#include <stdio.h>
#include <cs50.h>

int main(void) {
    int scores[5];

    printf("Enter some scores...\n");
    for(int i=0; i < 5; i++) {
        scores[i] = get_int("Score: ");
    }

    printf("Your scores are: ");
    for(int i=0; i < 5; i++) {
        printf("%d, ", scores[i]);
    }
    printf("\n");

    return 0;
}

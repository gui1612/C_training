#include <stdio.h>

int main(void) {

    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("  C\t      F\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%3.0f\t%7.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
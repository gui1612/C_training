#include <stdio.h>

int main(void) {

    int c, followedBlanks;
    followedBlanks = 0;

    while((c = getchar()) != EOF) {
        if (!followedBlanks) {
            if (c == ' ') {
                putchar(c);
                followedBlanks = 1;
            } else {
                putchar(c);
            }
        } else {
            if (c != ' ') {
                putchar(c);
                followedBlanks = 0;
            }
        }
    }

    return 0;
}
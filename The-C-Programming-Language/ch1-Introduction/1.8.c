#include <stdio.h>

int main(void) {

    int c, nl, tab, blank;

    nl = 0;
    tab = 0;
    blank = 0;

    while ((c = getchar()) != EOF) 
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tab;
        else if (c == ' ')
            ++blank;
    
    printf("\nThere are:\n");

    printf("%d lines\n%d tabs\n%d blanks", nl, tab, blank);
    return 0;
}
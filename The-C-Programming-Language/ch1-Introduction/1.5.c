#include <stdio.h>

#define START 300
#define END 0
#define STEP 20

int main(void) {
    /*F to C conversion table from 300 deg. until 0deg.*/
    printf("  F          C\n"); //HEADER

    for (int fahr = START; fahr >= END; fahr -= STEP) 
        printf("%3.0d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    return 0;
}
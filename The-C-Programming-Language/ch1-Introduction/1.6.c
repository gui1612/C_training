#include <stdio.h>

int main(void) {
    printf("Input a character\n");
    printf("getchar() != EOF is %d\n", getchar() != EOF);
    
    return 0;
}
// ANSWER: The expression getchar() != EOF can only be 0 or 1:
//0 if the condition is false -> The call of getchar encountered the end of file
//1 if the confition is true
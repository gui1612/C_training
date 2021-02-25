#include <stdio.h>

int main(void) {
	printf("Hello, world \c");
	return 0;
}


/* If we change the /n to /c we get the following warning:
 *
 1.1-2.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
1.1-2.c: In function ‘main’:
1.1-2.c:6:13: warning: unknown escape sequence: '\c'
    6 |  printf("\c");
      |             ^
 *
 * Then, the string is printed	  
 */

#include <stdio.h>
#include <ctype.h>

int main(){
	
	char v[6] = "he1lo";



	for(int i = 0; i < 5; i++){
		if (isalpha(v[i])) {
			v[i] = toupper(v[i]);
		}	
	
	}

	puts(v);
	//printf(%c\n, toupper(111));
	return 0;
}

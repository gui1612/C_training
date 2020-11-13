#include <stdio.h>


int main(){


	int a  = 10;
	int *ap = &a;
	*ap = 12;
	printf("%d\n", a);
	
/*
	//int v[5] = {6, 7, 8, 9, 10};
	long long v[5] = {6, 7, 8, 9, 10};

	for (int i = 0; i < 5; i++) {
		printf("v[%d] : %lld at %lld\n", i, v[i], &v[i]);
	}

	*/

	return 0;
}

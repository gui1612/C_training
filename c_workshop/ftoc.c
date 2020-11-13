#include <stdio.h>


int ftoc(double local){

	double valor = (local - 32)/1.8;
	return valor;
}

void p(){
	printf("Hello\n");
}


int main(){
	
	p();	
	double b = ftoc(42);
	double c = ftoc(30);
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}

#include<stdio.h>


struct person {
	int age;
	int speed;
};

typedef struct person P;

void printP(P p){

	printf("Person with age %d and speed %dn", p.age, p.speed);

}


int main(){


	struct person p1 = {1, 2};
	printP(p1);


	return 0;
}

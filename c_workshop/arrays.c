#include <stdio.h>

int main() {

	int v[9] = {10, 20, 30, 40, 50, 2, 22, 11, 15};
	int max = v[0];
	int i  = 0;

	while (i < 9) {
		//printf("%dn", i);
		//printf("%dn", v[i]);

		if (max < v[i]) {
			max = v[i];
		}

		i++;
	}
	printf("%d\n", max);

	return 0;

}

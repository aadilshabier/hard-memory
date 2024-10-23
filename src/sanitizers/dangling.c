#include <stdio.h>
#include <stdlib.h>

void use(int *p) {
	printf("Number: %d\n", *p);
};

int main() {
	int *p1;

	if (1 == 1) {
		int *p2 = malloc(sizeof(int) * 12);
		p1 = p2;
		// use p2
		free(p2);
	}

	// p1 points to an invalid object
	use(p1);
}

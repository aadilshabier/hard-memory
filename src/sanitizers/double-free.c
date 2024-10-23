#include <stdlib.h>

int main() {
	int *p1;

	if (1 == 1) {
		int *p2 = malloc(sizeof(int) * 12);
		p1 = p2;
		// use p2
		free(p2);
	}

	// double free occurs here
	free(p1);
}

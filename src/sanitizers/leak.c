#include <stdlib.h>

int main() {
	if (1 == 1) {
		int *arr = malloc(sizeof(int) * 12);
	}

	// memory allocated by arr is lost forever
}

#include <stdio.h>
#include <pthread.h>

int counter = 0;

void* increment_counter(void* arg) {
    for (int i = 0; i < 1000000; i++) {
        counter++;
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, increment_counter, NULL);
    pthread_create(&thread2, NULL, increment_counter, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // The expected result should be 2000000, but due to
	// race conditions, it may not be.
    printf("Final counter value: %d\n", counter);

    return 0;
}

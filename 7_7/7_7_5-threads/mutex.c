#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

pthread_t threadId[5]; // 5 threadId vars in our array
pthread_mutex_t lock;
int counter = 0;


// will lock the mutex, this, when startin for each thread we joined to the main process
// will unlock once the task is finished
void* outputMsg(void *arg) {
    pthread_mutex_lock(&lock);
    printf("Task %d start\n", ++counter);
    sleep(1);
    printf("Task %d finish\n\n", counter);
    pthread_mutex_unlock(&lock);
    return NULL;
}

int main() {
    pthread_mutex_init(&lock, NULL); // init and lock

    for (int i = 0; i < 5; i++) {
	    // create 5 threads
   	pthread_create(&(threadId[i]), NULL, outputMsg, NULL); // run outputMsg when they start
    }

    for (int i = 0; i < 5; i++) {
        pthread_join(threadId[i], NULL); // we join the 5 of them
    }

    pthread_mutex_destroy(&lock);

    return 0;
}

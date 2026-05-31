#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *outputMsg()
{
    sleep(1);
    puts("Hello from the thread!");
    return NULL;
}

int main()
{
    pthread_t threadId; // var, is a threaddata type called pthread_t which begins an integer value, something like 4096
    printf("Starting thread id: %ld\n", threadId);
    pthread_create(&threadId, NULL, outputMsg, NULL); // create a new thread with our threadId with its attributes
    pthread_join(threadId, NULL); // join main thread
    sleep(1);
    printf("Exiting...\n");
    return 0;
}

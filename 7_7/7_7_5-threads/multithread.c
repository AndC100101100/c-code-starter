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
    pthread_t threadId;
    printf("Starting thread id: %ld\n", threadId);
    pthread_create(&threadId, NULL, outputMsg, NULL);
    pthread_join(threadId, NULL);
    sleep(1);
    printf("Exiting...\n");
    return 0;
}

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

pthread_t threadId[5];
pthread_mutex_t lock;
int counter = 0;


void* outputMsg(void *arg){
	pthread_mutex_lock(&lock);
	printf("Task %d start\n", ++counter);
	sleep(1);
	printf("Task %d finish\n", ++counter);
	pthread_mutex_unlock(&lock);
	return NULL;
}

#include <stdio.h>
#include <stdlib.h>

#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>

#define gettid() syscall(SYS_gettid)

/* this function is run by the second thread */
void *thread_main(void *parg)
{
	int i = random() % 13;
	int ctid = gettid();

	printf("Thread %i wait %d second\n", ctid, i);
	sleep (i);
	printf("After thread_main\n");

	/* the function must return something - NULL will do */
	return ctid;
}

int main()
{
	#define NUM_THREAD 10
	/* this variable is our reference to the second thread */
	pthread_t tid[NUM_THREAD];
	int i, ret;
	int ctid;

	/* create a second thread which executes inc_x(&x) */
	printf("Before pthread_create >>>>START\n");
	for (i = 0; i < NUM_THREAD; i++) {
		pthread_create(&tid[i], NULL, &thread_main, NULL);
	}
	printf("After pthread_create >>>>END\n");

	printf("Before pthread_join >>>>START\n");
	for (i = 0; i < NUM_THREAD; i++) {
		pthread_join(tid[i], &ctid);
		printf("Iter %d: pthread_join for thread %d finished\n", i, ctid);
	} 
	printf("After pthread_join >>>>END\n");

	return 0;
}

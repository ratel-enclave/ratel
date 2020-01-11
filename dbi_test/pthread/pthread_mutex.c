#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>

#define gettid() syscall(SYS_gettid)

#define NUM_THREAD 4

pthread_t tid[NUM_THREAD];
int counter;
pthread_mutex_t lock;

void* doSomeThing(void *arg)
{
    int ctid = gettid();

    pthread_mutex_lock(&lock);

    unsigned long i = 0;
    counter += 1;
    printf("\n Job %d started on thread %d\n", counter, ctid);

    for(i=0; i<(0xFFFFFFFF);i++);

    printf("\n Job %d finished on thread %d\n", counter, ctid);

    pthread_mutex_unlock(&lock);

    return ctid;
}

int main(void)
{
    int i = 0;
    int err;
    int ctid;

    if (pthread_mutex_init(&lock, NULL) != 0)
    {
        printf("\n mutex init failed\n");
        return 1;
    }

    for (i = 0; i < NUM_THREAD; i++)
    {
        err = pthread_create(&(tid[i]), NULL, &doSomeThing, NULL);
        if (err != 0)
            printf("\ncan't create thread :[%s]", strerror(err));
    }

    for (i = 0; i < NUM_THREAD; i++) 
    {
        pthread_join(tid[i], &ctid);
        printf("Iter %d: pthread_join for thread %d finished\n", i, ctid);
    } 

    volatile int mutex_ret = pthread_mutex_destroy(&lock);
    printf("\n mutex lock 0x%lx destoried, des_ret = %lx!\n", &lock, mutex_ret);

    return 0;
}
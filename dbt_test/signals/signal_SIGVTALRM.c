#include <signal.h>  
#include <unistd.h>  
#include <stdio.h>  
#include <sys/time.h>

static int sec;
static int locked;  
  
void handle_sig(int signo)
{  
	switch (signo) 
	{  
		case SIGALRM:  
			fputs("Catch a SIGALRM\n", stdout);
			locked = 0;
			break;  
		case SIGVTALRM:  
			fputs("Catch a SIGVTALRM\n", stdout);
			locked = 0;  
			break;  
	}  
	return;  
}  
  
int main(int argc, char *argv[])
{  
	struct itimerval itv1, old_itv, itv2;  
	sec = 5;  
	  
	printf("\nPID = %d\n", getpid());
	signal(SIGALRM, handle_sig);  
	signal(SIGVTALRM, handle_sig);

	locked = 1;
	  
	itv1.it_value.tv_sec = 1;  
	itv1.it_value.tv_usec = 0;  
	itv1.it_interval.tv_sec = 1;  
	itv1.it_interval.tv_usec = 0;  
	setitimer(ITIMER_REAL, &itv1, &old_itv);  
	  
	itv2.it_value.tv_sec = 0;  
	itv2.it_value.tv_usec = 500000;  
	itv2.it_interval.tv_sec = 0;  
	itv2.it_interval.tv_usec = 500000;  
	setitimer(ITIMER_VIRTUAL, &itv2, &old_itv);  
  
	while (locked) {}

	printf("Exit\n");
    return (0);
}  

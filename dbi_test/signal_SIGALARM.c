#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// This function will handle a signal.
void HandleSignal(int sig, siginfo_t *si, void *context);
static int locked;

int main(int argc, char *argv[])
{
    struct sigaction sVal;
    pid_t myPID;
    pid_t myG_PID;

    // Specify that we will use a signal handler that takes three arguments
    // instead of one, which is the default.
    sVal.sa_flags = SA_SIGINFO;

    // Indicate which function is the signal handler.
    sVal.sa_sigaction = HandleSignal;

    myPID = getpid();
    printf("\nPID = %d\n", myPID);

    // Register for SIGINT
    sigaction(SIGALRM, &sVal, NULL);

    locked = 1;
    alarm(2);
    while (locked)
    {
    }

    printf("Exit\n");
    return (0);
}

void HandleSignal(int sig, siginfo_t *si, void *context)
{
    switch (sig)
    {

        case SIGALRM:
            printf("Get a SIGALRM\n");
            locked = 0;
            break;
    }
}

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
    sigaction(SIGUSR1, &sVal, NULL);

    locked = 1;
    kill(myPID, SIGUSR1);
    while (locked)
    {
    }

    puts("Exit");
    return (0);
}

void HandleSignal(int sig, siginfo_t *si, void *context)
{
    switch (sig)
    {

        case SIGUSR1:
            puts("Get a SIGUSR1");
            locked = 0;
            break;
    }
}

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
    myG_PID = getpgid(myPID);
    printf("\nMy process id = %d.\n", myPID);
    printf("My process group id = %d.\n", myG_PID);

    // Register for SIGINT
    sigaction(SIGALRM, &sVal, NULL);

    myPID = getpid();
    myG_PID = getpgid(myPID);
    printf("\nParent: My process id = %d.\n", myPID);
    printf("Parent: My process group id = %d.\n", myG_PID);

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
            printf("Get a sigalarm\n");
            locked = 0;
            if (si->si_code == CLD_EXITED || si->si_code == CLD_KILLED)
            {
                printf("   Process %d is done!\n", si->si_pid);
            }
            break;
    }
}

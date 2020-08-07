/* Example of using sigaction() to setup a signal handler
*/

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

static int locked;

// This function will handle a signal.
static void handle_sig(int sig, siginfo_t *si, void *context)
{
    switch (sig)
    {
        case SIGUSR1:
            puts("Catch a SIGUSR1");
            locked = 0;
            break;
    }
}

int main(int argc, char *argv[])
{
    struct sigaction sAct;
    pid_t myPID;

    memset (&sAct, '\0', sizeof(sAct));

    // Specify that we will use a signal handler that takes three arguments
    // instead of one, which is the default.
    sAct.sa_flags = SA_SIGINFO;

    // Indicate which function is the signal handler.
    sAct.sa_sigaction = handle_sig;

    myPID = getpid();
    printf("\nPID = %d\n", myPID);

    // Register for SIGUSR1
    if (sigaction(SIGUSR1, &sAct, NULL) < 0) {
      perror ("sigaction error: ");
      return (-1);
    }

    locked = 1;
    kill(myPID, SIGUSR1);
    while (locked) {}

    printf("Exit\n");
    return (0);
}

/* Example of using sigaction() to setup a signal handler
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

#define __USE_GNU
#include <signal.h>
#include <ucontext.h>

// This function will handle a signal.
static void handle_sig(int sig, siginfo_t *siginfo, void *context)
{
    ucontext_t *ucp = (ucontext_t *)context;
    
    puts("Catch a SIGILL");
    ucp->uc_mcontext.gregs[REG_RIP] += 2;
}

int main(int argc, char *argv[])
{
    struct sigaction sVal;
    pid_t myPID;

    memset (&sVal, '\0', sizeof(sVal));

    // Specify that we will use a signal handler that takes three arguments
    // instead of one, which is the default.
    sVal.sa_flags = SA_SIGINFO;

    // Indicate which function is the signal handler.
    sVal.sa_sigaction = handle_sig;

    myPID = getpid();
    printf("\nPID = %d\n", myPID);

    // Register for SIGILL
    if (sigaction(SIGILL, &sVal, NULL) < 0) {
      perror ("sigaction error: ");
      return (-1);
    }

    __asm__ __volatile__ ("UD2");

    printf("Exit\n");
    return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>


void sgx_procmaps(void)
{
    const char *fname = "/proc/self/maps";

    FILE *f = fopen(fname, "r");
    if (NULL == f) {
        printf("Failed to open file %s\n", fname);
        exit(-1);
    }

    char *l = malloc(1024);
    size_t n, res;
    while (getline(&l, &n, f) != -1) {
        printf("%s", l);
    }

    fclose(f);
}



int main(int argc, char *argv[], char *env[])
{
    sgx_procmaps();

    return 0;
}

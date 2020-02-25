#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void malloc_free(int nbytes)
{
    printf("TEST %s\n", __FUNCTION__);

    char *str = malloc(nbytes);

    strcpy(str, __FUNCTION__);
    printf("This is %s\n", str);


    free(str);

    printf("TEST %s: Success!\n", __FUNCTION__);
}





int main(int argc, char *argv[], char *env[])
{


    // invoke mmap directly
    void *buf1 = malloc(0x20010);

    // small buffer
    malloc_free(1024);

    //big buffer
    malloc_free(4096*20);

    free(buf1);

    return 0;
}

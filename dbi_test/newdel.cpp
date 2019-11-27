#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


void dummy(int data[], int nele)
{
    for (int i  = 0; i < nele; i++) {
        data[i] = i;
    }
}


void new_del(int nele)
{
    printf("TEST %s\n", __FUNCTION__);

    int *data = new int[nele];

    dummy(data, nele);
    for (int i  = 0; i < nele; i++) {
        assert(data[i] == i);
    }


    delete [] data;

    printf("TEST %s: Success!\n", __FUNCTION__);
}





int main(int argc, char *argv[], char *env[])
{
    new_del(10);

    return 0;
}

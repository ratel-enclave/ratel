#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>


void create_delete(void)
{
    const char *fname1 = "delme1.txt";
    const char *fname2 = "delme2.txt";
    int fd1, fd2, res;

    printf("TEST %s\n", __FUNCTION__);

    fd1 = creat(fname1, O_TRUNC);
    if (fd1 == -1) {
        printf("creat syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    else {
        res = unlink(fname1);
        if (res == -1) {
            printf("unlink syscall failed @%d, errno = %d\n", __LINE__, errno);
            exit(-1);
        }
    }

    fd2 = open(fname2, O_CREAT|O_WRONLY|O_TRUNC, 0644);
    if (fd2 == -1) {
        printf("open syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    else {
        res = unlink(fname2);
        if (res == -1) {
            printf("unlink syscall failed @%d, errno = %d\n", __LINE__, errno);
            exit(-1);
        }
    }
    printf("TEST %s: Success!\n", __FUNCTION__);
}

void open_read_write_close(void)
{
    const char *fname1 = "delme1.txt";
    int fd1, res;

    printf("TEST %s\n", __FUNCTION__);

    fd1 = open(fname1, O_CREAT|O_RDWR|O_TRUNC, 0644);
    if (fd1 == -1) {
        printf("open syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    // write 10
    char buf_w[] = "Test sgx-dbi's file system";
    res = write(fd1, buf_w, strlen(buf_w)+1);
    if (res == -1) {
        printf("write syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    // read
    char buf_r[64];
    res = read(fd1, buf_r, 64);
    if (res == -1) {
        printf("read syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    close(fd1);

    // delete file

    res = unlink(fname1);
    if (res == -1) {
        printf("unlink syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }


    printf("TEST %s: Success!\n", __FUNCTION__);
}


void fopen_fclose(void)
{
    printf("TEST %s\n", __FUNCTION__);

    const char* fname = __FILE__;

    FILE *f = fopen(fname, "r");
    if (NULL == f) {
        printf("Failed to open file %s\n", fname);
        exit(-1);
    }

    char *l = malloc(1024);
    size_t n, res;
    res = getline(&l, &n, f);
    if (res == -1) {
        printf("getline failed, errno = %d\n", errno);
        exit(-1);
    }
    else {
        // printf("Line 1: %s\n", l);
    }

    fclose(f);

    printf("TEST %s: Success!\n", __FUNCTION__);
}


int main(int argc, char* argv[], char* env[])
{
    create_delete();

    open_read_write_close();

    fopen_fclose();

    return 0;
}

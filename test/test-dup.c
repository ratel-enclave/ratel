#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include <errno.h>
int main() {

    int file_desc = open("tricky.txt", O_WRONLY | O_APPEND);

    if(file_desc < 0) {
        printf("Error opening the file\n");
        return -1;
    }
    
    // here the newfd is the file descriptor of stdout (i.e., 1)
    printf("%d\n", getuid());
    printf("file id is %d\n", file_desc);
    
    write(1, "write call", 11);
    
    int ret;
    ret = dup2(file_desc, 1);
    if( ret < 0 ) {
        printf("errno:%d , ret:%d\n", errno, ret);
        return -1;
    }

    printf("I will be printed in the file tricky.txt \n");
    // fflush(stdout);
    return 0; 
}

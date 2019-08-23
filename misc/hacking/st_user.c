#include <stdio.h>
#include <stdlib.h>
   #include <linux/unistd.h>
       #include <asm/ldt.h>


int main(int argc, char*argv[])
{
    printf("struct user_desc: %ld\n", sizeof(struct user_desc));
    return 0;

}


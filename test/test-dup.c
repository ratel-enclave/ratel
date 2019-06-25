#include<stdlib.h> 
#include<unistd.h> 
#include<stdio.h> 
#include<fcntl.h> 
#include <errno.h>  
int main() 
{ 
    int file_desc = open("/source/SGX-DBI/test/tricky.txt",O_WRONLY | O_APPEND); 
      
    if(file_desc < 0) 
        printf("Error opening the file\n");   
    // here the newfd is the file descriptor of stdout (i.e. 1)
  printf("%d\n",getuid()); 
 write(1,"write call",11);
   if( dup2(file_desc, 1) < 0 )
	printf("%d\n",errno) ;  
          
    printf("I will be printed in the file tricky.txt\n"); 
      
    return 0; 
} 

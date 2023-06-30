#include<unistd.h>
#include<stdio.h>

int main(){
    pid_t cpid;
    if(fork() == 0){
        exit(0);
    }
    else
    cpid = wait();
    printf("Parent pid = %d\n", getpid());
    printf("Child pid = %d\n", cpid);

    return 0;
}
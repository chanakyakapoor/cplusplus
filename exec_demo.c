#include<unistd.h>
#include<stdio.h>

int main(){
    printf("IN EXEC_DEMO\n");
    printf("\nPROCESS ID = %d\n", getpid());

    char *args[] = {"./hello", NULL};
    execv(args[0], args);
    printf("BACK TO SQUARE ONE\n");

    return 0;
}
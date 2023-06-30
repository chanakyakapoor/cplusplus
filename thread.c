#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* message(void* ptr);

main(){
    pthread_t thread1, thread2;
    char* msg1 = "T1 in progress";
    char* msg2 = "T2 in progress";
    int i1, i2;

    pthread_create(&thread1, NULL, message, (void*)msg1);
    pthread_create(&thread2, NULL, message, (void*)msg2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("T1 returns: %d\n", i1);
    printf("T2 returns: %d\n", i2);

    exit(0);
}

void *message(void *ptr)
{
    char *msg = (char *)ptr;
    printf("%s\n", msg);
}
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void handler(int signal_no){
    printf("\nSignal's number is %d\n", signal_no);
}

int main(){
    (void) signal (SIGINT, handler);

    while(1){
        printf("\nIN LOOP!");
        sleep(1);
    }

    return 0;
}
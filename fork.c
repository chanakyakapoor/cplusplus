// #include <stdio.h>
// #include <unistd.h>
// #include <stdbool.h>

// void cproc(int arr[])
// {

//     int a, b;
//     printf("\nEnter a range of numbers\n");
//     printf("\nlower\t");
//     scanf("%d", &a);
//     printf("\nhigher\t");
//     scanf("%d", &b);

//     if (b > a)
//     {
//         arr[0] = a;
//         arr[1] = b;
//     }
//     else
//     {
//         arr[0] = b;
//         arr[1] = a;
//     }
// }

// bool pproc(int a, int b)
// {

//     int t;
//     printf("\nCheck number is in the range or not\n");
//     printf("\nenter number\t");
//     scanf("%d", &t);

//     if (t <= b && t >= a)
//     {
//         return true;
//     }
//     else
//         return false;
// }

// int main()
// {

//     printf("\nProcess ID = %d\n", getpid());

//     pid_t val = fork();

//     int res, arr[2];
//     printf("%d\n", getppid());

//     if (val < 0)
//     {
//         printf("\nFORKING FAILED!!");
//     }

//     else if (val == 0)
//     {
//         printf("\nRUNNING CHILD PROCESS with ID = %d\n", getpid());
//         cproc(arr);
//         printf("%d\n", arr[0]);
//         printf("%d\n", arr[1]);
//     }

//     else
//     {
//         wait();
//         printf("\nRUNNING PARENT PROCESS with ID = %d\n", getpid());
//         res = pproc(arr[0], arr[1]);
//         if (res > 0)
//         {
//             printf("\nYES\n");
//         }
//         else
//             printf("\nNO\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <unistd.h>

int main(){

    fork();
    printf("Process ID = %d\n", getpid());
    fork();
    printf("HI !\n");

    return 0;
}
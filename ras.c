#iclude<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main(void){
    int pid,status;
    pid = fork();
    if (pid == 0){ // Child process
    int num = 5;
    for ( int i=1; i<=10; i++){
         printf("%d 8 %d = %d\n", num, i, num*i);
         }
       }
       else{// Parent Process
       wait (&status);
       printf("In the parent Process ;\nName is Rashid Ali and CNIC is 3650114226865");
       }
       return 0;
       }

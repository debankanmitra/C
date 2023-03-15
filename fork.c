//System call fork() is used to create processes. It takes no arguments and returns a process ID. The purpose of fork() is to create a new process, which becomes the child process of the caller. After a new child process is created, both processes will execute the next instruction following the fork() system call.
//VIDEO UNCODE 7 ******IMPORTANT
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
pid_t child_id , parent_id , id;
// PARENT AND THE CHILD PROCESS BOTH WILL RUN PARALLELY
id=fork();
printf("RETURN VALUE OF FORK%d\n:",id);
if(id==0){ // ANYONE OF THE CHILD OR PARENT PROCESS CAN BE EXECUTE BECAUSE OF RANDOM SCHEDULING OF OS 
    child_id=getpid();
    printf("PRINTING FROM CHILD HAVING PID%d\n:",child_id);
}else if(id>0){
     parent_id=getpid();
     printf("PRINTING FROM PARENT HAVING PID%d\n:",parent_id);
     printf("RETURN VALUE OF FORK%d\n:",id);
}
printf("TO AVOID RANDOM SCHEDULING WE USE WAIT SO ANYONE ONE OF THE PROCESS WAIT FOR ONE'S COMPLETE EXECUTION");
id=fork();
if(id==0){ 
    for(int i=0 ; i<10 ; i++)
    printf("PRINTING FROM CHILD HAVING PID\n:");
}else if(id>0){
     wait(NULL);
     for(int i=0 ; i<10 ; i++)
     printf("PRINTING FROM PARENT HAVING PID\n:");
}
}


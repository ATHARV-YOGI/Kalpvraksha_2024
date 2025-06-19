#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <unistd.h>

void parentProcess(pid_t);
void childProcess(int, char**);

int main(int argc, char *argv[]){
    pid_t pid = fork();
    if(pid < 0) {
        perror("Fork Failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        childProcess(argc, argv);
    } else{
        parentProcess (pid);
    }
    return 0;
} 

void childProcess(int argc, char *argv[]) {
    execl("./exeR", "./exeR", "atharv", "hi", NULL);
    printf("Failed to execute greeting program\n");
    perror("execl failed");
    exit(EXIT_FAILURE);
}

void parentProcess(pid_t pid) {
    printf("Launched process with PID: %d\n", pid);
}



#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

void parentProcess(pid_t);
void childProcess(int, char**);

int main(int argc, char *argv[]){
    pid_t pid = fork();
    if(pid < 0){
        perror("fork failed");
        exit(EXIT_FAILURE);
    }else if(pid == 0){
        childProcess(argc, argv);
    }else{
        parentProcess(pid);
    }
    return 0;
}

void childProcess(int argc, char *argv[]){
    char *argument[] = {"exeR", "atharv", "hi", NULL};
    execvp("exeR", argument);
    printf("Failed to execute exeRelated program\n");
    perror("execl failure");
    exit(EXIT_FAILURE);
}

void parentProcess(pid_t pid){
    printf("Launched process with PID: %d\n", pid);
    int status;
    waitpid(pid, &status, 0);
    if(WIFEXITED(status)) printf("Child process exited with status: %d\n", WEXITSTATUS(status));
    else printf("ERROR in execution of child process.\n");
}



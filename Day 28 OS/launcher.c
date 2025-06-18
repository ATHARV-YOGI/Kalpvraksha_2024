#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void child_process();
void parent_process();

int main(int argc, char *argv[]) {
    pid_t pid = fork();
    if (pid < 0) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        child_process(argc, argv);
    } else {
        parent_process(pid);
    }
    return 0;
}

void child_process(int argc, char *argv[]) {
    execl("./greeting", "./greeting", "Shubham", "Deepak", NULL);
    printf("Failed to execute greeting program\n");
    perror("execl failed");
    exit(EXIT_FAILURE);
}

void parent_process(pid_t pid) {
    printf("Launched process with PID: %d\n", pid);
}
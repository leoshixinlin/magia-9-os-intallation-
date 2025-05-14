#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    printf("Before vfork()\n");

    pid = vfork();

    if (pid < 0) {
        perror("vfork failed");
        exit(1);
    } else if (pid == 0) {
        // Child process
        execlp("ls", "ls", "-l", NULL);
        _exit(0); // Use _exit to avoid affecting parent
    } else {
        // Parent process
        wait(NULL);
        printf("Child process finished\n");
    }

    return 0;
}

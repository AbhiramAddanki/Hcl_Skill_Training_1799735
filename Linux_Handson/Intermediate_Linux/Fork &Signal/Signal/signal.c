#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int flag = 1;

void handle_sigint(int sig) {
    printf("\nSIGINT received. Stopping loop...\n");
    flag = 0;
}

void handle_sigchld(int sig) {
    while (waitpid(-1, NULL, WNOHANG) > 0);
    printf("Child reaped\n");
}

int main() {
    struct sigaction sa1, sa2;

    sa1.sa_handler = handle_sigint;
    sigaction(SIGINT, &sa1, NULL);

    sa2.sa_handler = handle_sigchld;
    sigaction(SIGCHLD, &sa2, NULL);

    if (fork() == 0) {
        sleep(2);
        return 0;
    }

    while (flag) {
        printf("Running...\n");
        sleep(1);
    }

    return 0;
}

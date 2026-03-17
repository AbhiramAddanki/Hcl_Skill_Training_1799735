#include <stdio.h>
#include <sys/shm.h>
#include <string.h>
#include <unistd.h>

int main() {
    int shmid = shmget(1234, 1024, 0666 | IPC_CREAT);
    char *data = (char *)shmat(shmid, NULL, 0);

    if (fork() == 0) {
        // Child writes
        strcpy(data, "Hello from child");
    } else {
        sleep(1);
        printf("Parent read: %s\n", data);
    }

    shmdt(data);
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}

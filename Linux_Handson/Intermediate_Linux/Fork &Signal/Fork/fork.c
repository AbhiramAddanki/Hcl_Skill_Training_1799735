#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main() {
    int fd;
    pid_t pid = fork();

    if (pid == 0) {
        // Child
        fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
        write(fd, "Child writing\n", 15);
        close(fd);
    } else {
        // Parent
        sleep(1); // if we remove this then race condition happens 
        fd = open("test.txt", O_RDONLY);
        char buf[100];
        read(fd, buf, sizeof(buf));
        printf("Parent read: %s\n", buf);
        close(fd);
    }

    return 0;
}

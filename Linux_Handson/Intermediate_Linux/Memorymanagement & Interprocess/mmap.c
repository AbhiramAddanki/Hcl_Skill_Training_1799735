#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("file.txt", O_RDWR | O_CREAT, 0644);
    ftruncate(fd, 100);

    char *data = mmap(NULL, 100, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

    sprintf(data, "Hello mmap!");

    munmap(data, 100);
    close(fd);

    return 0;
}

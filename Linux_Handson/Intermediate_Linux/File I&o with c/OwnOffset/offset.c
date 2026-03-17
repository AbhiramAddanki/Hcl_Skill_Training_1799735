#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd1 = open("output.txt", O_RDONLY);
    int fd2 = open("output.txt", O_RDONLY);

    char buf[6];

    read(fd1, buf, 5);
    buf[5] = '\0';

    printf("fd1 read: %s\n", buf);

    read(fd2, buf, 5);
    buf[5] = '\0';

    printf("fd2 read: %s\n", buf);

    close(fd1);
    close(fd2);
}

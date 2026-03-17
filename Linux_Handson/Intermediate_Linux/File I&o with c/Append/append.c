#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd = open("log.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);

    if(fd < 0)
    {
        perror("open");
        return 1;
    }

    char text[] = "New log entry\n";

    write(fd, text, strlen(text));

    close(fd);

    printf("Text appended successfully\n");

    return 0;
}

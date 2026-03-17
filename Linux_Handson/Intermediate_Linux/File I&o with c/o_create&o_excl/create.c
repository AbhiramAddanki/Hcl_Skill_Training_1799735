#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd = open("secure.txt", O_CREAT | O_EXCL | O_WRONLY, 0644);

    if(fd < 0)
    {
        perror("File already exists");
        return 1;
    }

    write(fd, "Secure file created\n", 20);

    close(fd);

    printf("File created successfully\n");

    return 0;
}

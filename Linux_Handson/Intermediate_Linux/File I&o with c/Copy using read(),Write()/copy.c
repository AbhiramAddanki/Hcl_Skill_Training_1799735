#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("Usage: %s <source> <destination> <buffer_size>\n", argv[0]);
        return 1;
    }

    int bufsize = atoi(argv[3]);

    int src_fd = open(argv[1], O_RDONLY);

    if(src_fd < 0)
    {
        perror("Error opening source file");
        return 1;
    }

    int dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if(dest_fd < 0)
    {
        perror("Error opening destination file");
        close(src_fd);
        return 1;
    }

    char buffer[bufsize];
    ssize_t bytes_read;

    while((bytes_read = read(src_fd, buffer, bufsize)) > 0)
    {
        write(dest_fd, buffer, bytes_read);
    }

    close(src_fd);
    close(dest_fd);

    printf("File copied successfully\n");

    return 0;
}

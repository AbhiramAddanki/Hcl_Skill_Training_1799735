#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: %s file\n", argv[0]);
        return 1;
    }

    int fd = open(argv[1], O_RDONLY);

    if(fd < 0)
    {
        perror("open");
        return 1;
    }

    char buf[16];
    int n;

    while((n = read(fd, buf, 16)) > 0)
    {
        for(int i=0;i<n;i++)
            printf("%02x ", buf[i]);

        printf("   ");

        for(int i=0;i<n;i++)
        {
            if(buf[i] >= 32 && buf[i] <= 126)
                printf("%c", buf[i]);
            else
                printf(".");
        }

        printf("\n");
    }

    close(fd);

    return 0;
}

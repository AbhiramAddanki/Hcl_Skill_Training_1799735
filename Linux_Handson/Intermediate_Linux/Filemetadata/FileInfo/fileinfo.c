#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char *argv[])
{
    struct stat s;

    if(stat(argv[1], &s) < 0)
    {
        perror("stat");
        return 1;
    }

    printf("File size: %ld bytes\n", s.st_size);

    printf("Permissions: ");
    printf((s.st_mode & S_IRUSR) ? "r" : "-");
    printf((s.st_mode & S_IWUSR) ? "w" : "-");
    printf((s.st_mode & S_IXUSR) ? "x" : "-");

    printf((s.st_mode & S_IRGRP) ? "r" : "-");
    printf((s.st_mode & S_IWGRP) ? "w" : "-");
    printf((s.st_mode & S_IXGRP) ? "x" : "-");

    printf((s.st_mode & S_IROTH) ? "r" : "-");
    printf((s.st_mode & S_IWOTH) ? "w" : "-");
    printf((s.st_mode & S_IXOTH) ? "x" : "-");

    printf("\n");

    if(S_ISREG(s.st_mode))
        printf("File type: Regular file\n");
    else if(S_ISDIR(s.st_mode))
        printf("File type: Directory\n");
    else if(S_ISLNK(s.st_mode))
        printf("File type: Symbolic link\n");

    printf("Last modified: %s", ctime(&s.st_mtime));

    return 0;
}

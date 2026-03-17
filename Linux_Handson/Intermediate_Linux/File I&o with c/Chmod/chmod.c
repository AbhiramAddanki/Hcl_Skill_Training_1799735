#include <stdio.h>
#include <sys/stat.h>

int main()
{
    if(chmod("test.txt", 0750) < 0)
    {
        perror("chmod");
        return 1;
    }

    printf("Permissions changed to 0750\n");

    return 0;
}

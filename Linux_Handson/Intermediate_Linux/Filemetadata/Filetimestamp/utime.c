#include <stdio.h>
#include <utime.h>
#include <time.h>

int main()
{
    struct utimbuf new_time;

    new_time.actime = time(NULL);
    new_time.modtime = time(NULL);

    if(utime("test.txt", &new_time) < 0)
    {
        perror("utime");
        return 1;
    }

    printf("Timestamps updated\n");

    return 0;
}

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void main()
{
    int fd;
    mkfifo("/tmp/myfifo", 0666);
    fd = open("/tmp/myfifo", O_WRONLY);
    write(fd, "Hello world!", 12);
    close(fd);
} 


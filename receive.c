#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void main()
{
    int fd;
    char Buf[13];
    fd = open("/tmp/myfifo", O_RDONLY);
    read(fd, Buf, 12);
    Buf[12] = '\0';
    printf("This is the data:%s\n", Buf);
    close(fd);
    unlink("/tmp/myfifo");
}

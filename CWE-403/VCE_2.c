#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int fd;
    fd = open("sensitive_file.txt", O_RDONLY);
    system("/some/external/program");  // This program can access fd
    close(fd);
    return 0;
}

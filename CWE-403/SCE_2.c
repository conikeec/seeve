#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int fd;
    fd = open("sensitive_file.txt", O_RDONLY);
    
    // Set the FD_CLOEXEC flag on the file descriptor
    int flags = fcntl(fd, F_GETFD);
    if (flags == -1) {
        perror("Error getting file descriptor flags");
        exit(1);
    }
    flags |= FD_CLOEXEC;
    if (fcntl(fd, F_SETFD, flags) == -1) {
        perror("Error setting file descriptor flags");
        exit(1);
    }

    system("/some/external/program");  // The external program won't have access to fd
    close(fd);
    return 0;
}

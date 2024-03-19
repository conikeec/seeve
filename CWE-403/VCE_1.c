#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    fd = open("/tmp/predictable_tmp_file", O_RDWR | O_CREAT, 0666);
    // ... write some sensitive data to fd ...
    close(fd);
    return 0;
}

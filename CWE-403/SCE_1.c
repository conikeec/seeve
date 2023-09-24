#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int fd;
    char template[] = "/tmp/secure_tmp_file_XXXXXX";  // 'XXXXXX' will be replaced by mkstemp with a unique string

    fd = mkstemp(template);
    if (fd == -1) {
        perror("Error creating temporary file");
        exit(1);
    }

    // ... write some sensitive data to fd ...

    close(fd);
    unlink(template);  // Delete the temporary file
    return 0;
}

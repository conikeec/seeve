#include <unistd.h>
#include <stdlib.h>
#define BLOCK_SIZE 16

char* getBlock(int fd) {
    char* buf = (char*) malloc(BLOCK_SIZE);
    if (!buf) {
        return NULL;
    }
    if (read(fd, buf, BLOCK_SIZE) != BLOCK_SIZE) {
        free(buf);  // Release the memory if read fails
        return NULL;
    }
    return buf;
}

int main(){
    char *buff;
    buff = getBlock(0);
    if (buff) {
        free(buff);  // Release the memory before exiting
    }
    return 0;
}

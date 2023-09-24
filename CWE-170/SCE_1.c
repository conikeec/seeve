#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define MAXLEN 1024

int main() {
    char inputbuf[MAXLEN];
    char pathbuf[MAXLEN];

    // Read data and ensure it's null-terminated
    ssize_t bytes_read = read(0, inputbuf, MAXLEN - 1); // Leave space for null terminator
    if (bytes_read <= 0) {
        perror("Failed to read data");
        return 1;
    }
    inputbuf[bytes_read] = '\0'; // Null-terminate the string

    // Safely copy the string
    strncpy(pathbuf, inputbuf, MAXLEN - 1);
    pathbuf[MAXLEN - 1] = '\0'; // Ensure pathbuf is null-terminated

    return 0;
}

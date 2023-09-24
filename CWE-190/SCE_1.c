#include <unistd.h>
#include <stdlib.h>

int main()
{
    char *buf;
    int len;

    // Read the length
    read(0, &len, sizeof(len));

    // Check for negative values and a safe upper limit
    if (len <= 0 || len > 8000) {
        return 0;
    }

    // Allocate memory
    buf = malloc(len);
    if (!buf) {
        perror("Memory allocation failed");
        return 1;
    }

    // Read data into the buffer
    read(0, buf, len);

    // Clean up
    free(buf);
    return 0;
}

#include <stdio.h>
#include <string.h>

void printWrapper(char *string) {
    printf("%s", string);  // Use a fixed format string
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    char buf[5012];
    strncpy(buf, argv[1], sizeof(buf) - 1);  // Use strncpy to prevent buffer overflow
    buf[sizeof(buf) - 1] = '\0';  // Ensure null termination

    printWrapper(buf);
    return 0;
}

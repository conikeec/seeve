#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    // Use strncpy to ensure we don't write past the buffer size
    strncpy(buffer, "This string is too long for the buffer", sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';  // Ensure null termination
    return 0;
}

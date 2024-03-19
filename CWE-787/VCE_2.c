#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    strcpy(buffer, "This string is too long for the buffer");  // Out-of-bounds write
    return 0;
}

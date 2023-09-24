#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*) malloc(5 * sizeof(int));
    ptr[5] = 100;  // Out-of-bounds write
    free(ptr);
    return 0;
}

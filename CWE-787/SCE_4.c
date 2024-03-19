#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*) malloc(5 * sizeof(int));
    if (ptr) {  // Check if memory allocation was successful
        ptr[4] = 100;  // Use a valid index
        free(ptr);
    }
    return 0;
}

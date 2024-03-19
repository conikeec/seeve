#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 64

int main (){
    int abrt = 0;
    int err = 1;
    char* ptr = (char*) malloc(SIZE * sizeof(char));
    if (!ptr) {
        perror("Failed to allocate memory");
        return 1;
    }

    strcpy(ptr, "This string is in the heap");

    if (err) {
        abrt = 1;
        printf("operation aborted before commit. Pointer value is ptr: %s", ptr);
        free(ptr);  // Move the free after the printf
        char* ptr2 = (char*) malloc(2 * sizeof(char));
        if (!ptr2) {
            perror("Failed to allocate memory for ptr2");
            return 1;
        }
        free(ptr2);  // Free the newly allocated memory to avoid memory leak
    }

    return 0;
}

#include <stdlib.h>
#define SIZE 16

int main(){
    char* ptr = (char*)malloc(SIZE);
    if (ptr) {  // Ensure ptr is not NULL before freeing
        free(ptr);
        ptr = NULL;  // Set ptr to NULL after freeing
    }
    // No need for the second free
    return 0;
}

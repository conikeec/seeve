#include <stdio.h>
#include <stdlib.h>

void dangerous_func(int* ptr, int a, int b) {
    int val = 0;
    if (!ptr) return;

    if (a) {
        *ptr += 2;
    } else {
        val = *ptr;
        free(ptr);
        ptr = NULL;  // Set ptr to NULL after freeing
    }

    if (b) {
        val += 5;
    } else {
        if (ptr) {  // Check if ptr is not NULL before accessing
            val += *ptr;
        }
    }

    if (a && ptr) {  // Check if ptr is not NULL before freeing
        free(ptr);
        ptr = NULL;  // Set ptr to NULL after freeing
    }

    printf("val = %i\n", val);
}

int main() {
    dangerous_func(malloc(sizeof(int)), 0, 0);
    return 0;
}

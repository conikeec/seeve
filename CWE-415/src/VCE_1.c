#include <stdlib.h>
#define SIZE 16
int main(){
    char* ptr = (char*)malloc (SIZE);
    if (1) {
        free(ptr);
    }
    free(ptr);
    return 0;
}

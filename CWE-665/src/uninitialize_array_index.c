#include <stdio.h>
int main() {
    int uninitialized_index;
    int array[3] = {0,1,2};
    printf("%d\n", array[uninitialized_index]);
}

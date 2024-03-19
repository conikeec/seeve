#include <stdio.h>

int main() {
    int i;
    int arr[10];
    for (i = 0; i <= 10; i++) {  // The loop should run from 0 to 9, not 10
        arr[i] = i;  // Out-of-bounds write when i = 10
    }
    return 0;
}

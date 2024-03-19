#include <stdio.h>

int main() {
    int arr[5];
    // Ensure we don't write past the end of the array
    if (sizeof(arr)/sizeof(arr[0]) > 5) {
        arr[4] = 42;  // Use a valid index
    }
    return 0;
}

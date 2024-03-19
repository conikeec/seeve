#include <stdio.h>

int main()
{
    int x;
    int a[10];
    a[0] = 0;

    // Check for division by zero
    if (a[0] != 0) {
        x = 1 / a[0];
    } else {
        printf("Error: Division by zero.\n");
        return 1;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int x;
    int y = 0;

    // Check for division by zero
    if (y != 0) {
        x = 4 / y;
    } else {
        printf("Error: Division by zero.\n");
        return 1;
    }

    return 0;
}

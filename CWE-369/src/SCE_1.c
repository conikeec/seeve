#include <stdio.h>

int main()
{
    int x;

    // Check for division by zero
    int denominator = 0;
    if (denominator != 0) {
        x = 1 / denominator;
    } else {
        printf("Error: Division by zero.\n");
        return 1;
    }

    return 0;
}

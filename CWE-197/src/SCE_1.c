#include <stdio.h>
#include <limits.h>

int main() {
    int intPrimitive;
    short shortPrimitive;

    intPrimitive = (int)(~((int)0) ^ (1 << (sizeof(int)*8-1)));

    // Check if intPrimitive exceeds the range of short
    if (intPrimitive > SHRT_MAX || intPrimitive < SHRT_MIN) {
        printf("Error: Value exceeds the range of short.\n");
        return 1;
    }

    shortPrimitive = (short)intPrimitive;

    // Use appropriate format specifiers
    printf("Int MAXINT: %d\nShort MAXINT: %hd\n", intPrimitive, shortPrimitive);

    return 0;
}

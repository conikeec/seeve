#include <stdio.h>
int main(){
    int intPrimitive;
    short shortPrimitive;
    intPrimitive = (int)(~((int)0) ^ (1 << (sizeof(int)*8-1)));
    shortPrimitive = intPrimitive;
    printf("Int MAXINT: %d\nShort MAXINT: %d\n", intPrimitive, shortPrimitive);
    return 0;
}

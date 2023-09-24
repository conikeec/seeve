#include <stdio.h>

unsigned int amount(int y) {
    if (y < 0) {
        printf("Error: Negative value provided.\n");
        return 0; // or handle the error as appropriate
    }
    return (unsigned int)y;
}

int main() {
    int amoun;
    int value = -300;
    amoun = amount(value);
    return 0;
}

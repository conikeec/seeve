#include <stdio.h>

int main() {
    char buffer[20];
    printf("Enter a string: ");
    scanf("%s", buffer);  // If the user enters more than 19 characters (+1 for null terminator), it results in an out-of-bounds write
    return 0;
}

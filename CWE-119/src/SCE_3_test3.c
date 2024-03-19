#include <stdio.h>

/*The following example asks a user for an offset into an array to select an item.*/
int GetUntrustedOffset(){
    int x = -1;
    return x;
}

int main (int argc, char **argv) {
    char *items[] = {"boat", "car", "truck", "train"};
    int num_items = sizeof(items) / sizeof(items[0]); // Calculate the number of items in the array

    int index = GetUntrustedOffset();

    // Validate the index to ensure it's within the valid range
    if (index <= 0 || index > num_items) {
        printf("Invalid selection.\n");
        return 1;
    }

    printf("You selected %s\n", items[index-1]);
    return 0;
}

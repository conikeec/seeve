int main()
{
    int x;
    int y = 10;
    int a[10];

    int array_size = sizeof(a) / sizeof(a[0]);

    if (y+2 >= 0 && y+2 < array_size) {
        x = a[y+2];
    } else {
        // Handle out-of-bounds access, e.g., set x to a default value or print an error message
        x = 0;  // Default value
        printf("Index out of bounds!\n");
    }

    return 0;
}

int main()
{
    int a[10];
    int last_index = sizeof(a) / sizeof(a[0]) - 1;  // Calculate the last index of the array
    a[last_index] = 0;  // Set the last element of the array to 0
    return 0;
}

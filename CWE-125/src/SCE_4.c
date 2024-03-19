int main()
{
    int a[10];
    int array_size = sizeof(a) / sizeof(a[0]);
    int y = array_size - 1;  // Start with the last valid index of the array

    while (y >= 0) 
    {   
        a[y] = y;
        y = y - 1;
    }
    return 0;
}

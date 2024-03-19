#include <stdio.h>
#include <string.h>

int main(){
    char str[20] = "";  // Initialize the array with an empty string
    strcat(str, "hello world");
    printf("%s", str);
    return 0;
}

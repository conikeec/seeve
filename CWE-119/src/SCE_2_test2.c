#define MAX_SIZE 16
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char * copy_input(char *user_supplied_string){
    int i, dst_index;
    size_t potential_length = strlen(user_supplied_string) * 5; // Maximum expansion factor is 5

    if (potential_length > 4 * MAX_SIZE) {
        printf("Encoded string might be too long, die evil hacker!\n");
        exit(0);
    }

    char *dst_buf = (char*) malloc(potential_length + 1); // +1 for null terminator
    if (!dst_buf) {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    dst_index = 0;
    for (i = 0; i < strlen(user_supplied_string); i++) {
        if ('&' == user_supplied_string[i]) {
            dst_buf[dst_index++] = '&';
            dst_buf[dst_index++] = 'a';
            dst_buf[dst_index++] = 'm';
            dst_buf[dst_index++] = 'p';
            dst_buf[dst_index++] = ';';
        }
        else if ('<' == user_supplied_string[i]) {
            // encode to &lt;
        }
        else {
            dst_buf[dst_index++] = user_supplied_string[i];
        }
    }
    dst_buf[dst_index] = '\0'; // Null-terminate the string
    return dst_buf;
}

int main(){
    char uss[MAX_SIZE + 1]; // +1 for null terminator
    ssize_t bytes_read = read(0, uss, MAX_SIZE);
    if (bytes_read <= 0) {
        printf("Failed to read input or input is empty.\n");
        return 1;
    }
    uss[bytes_read] = '\0'; // Null-terminate the string

    char *dst_buff = copy_input(uss);
    printf("%s", dst_buff); // Use %s format specifier for strings

    free(dst_buff); // Free the allocated memory
    return 0;
}

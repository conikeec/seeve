#define MAX_SIZE 16
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i, j = 0;
    char a[MAX_SIZE + 1]; // +1 for null terminator
    
    /*checks if the user provided an input*/
    if (argc < 2) return 0;
    
    /* Calculate the potential length of the encoded string */
    int potential_length = 0;
    for (i = 0; i < strlen(argv[1]); i++) {
        if ('&' == argv[1][i]) {
            potential_length += 5; // For &amp;
        } else {
            potential_length += 1;
        }
    }

    /*checks if the potential encoded length fits in the array a*/
    if (potential_length >= MAX_SIZE) {
        printf("Encoded string might be too long\n");
        return 0;
    }

    /*performs the encoding*/
    for (i = 0; i < strlen(argv[1]) && j < MAX_SIZE; i++) {
        if ('&' == argv[1][i]) {
            a[j++] = '&';
            a[j++] = 'a';
            a[j++] = 'm';
            a[j++] = 'p';
            a[j++] = ';';
        } else {
            a[j++] = argv[1][i];
        }
    }
    a[j] = '\0'; // Null-terminate the string
    printf("The encoded string is %s \n", a);
    return 0;
}

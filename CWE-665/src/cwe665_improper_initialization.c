/*
Common Weakness Enumeration 665 improper initialization
*/
#include <stdio.h>
#include <string.h> /*strcat();*/
int main() {
    /*
    This might seem innocent enough, but str was not initialized, so it contains random memory.
    As a result, str[0] might not contain the null terminator, so the copy might start at an offset other than 0.
    The consequences can vary, depending on the underlying memory.

    If a null terminator is found before str[8], then some bytes of random garbage will be printed before the "hello world" string.
    The memory might contain sensitive information from previous uses, such as a password (which might occur as a result of CWE-14 or CWE-244).
    In this example, it might not be a big deal,
    but consider what could happen if large amounts of memory are printed out before the null terminator is found.

    If a null terminator isn't found before str[8], then a buffer overflow could occur,
    since strcat will first look for the null terminator, then copy 12 bytes starting with that location.
    Alternately, a buffer over-read might occur (CWE-126) if a null terminator isn't found before the end of the memory segment is reached,
    leading to a segmentation fault and crash.
    */
    char string[11];
    strcat(string, "hello world");
    printf("%s\n", string);

    scanf("%s", string);
    printf("%s\n", string);
}

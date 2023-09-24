#include <stdio.h>
#include <string.h>

int main() {
    char firstname[20];
    char lastname[20];
    char fullname[40];

    // Assuming you want to initialize both firstname and lastname to empty strings
    firstname[0] = '\0';
    lastname[0] = '\0';

    strncat(fullname, firstname, 20); // Appends up to 20 characters plus a null terminator
    strncat(fullname, lastname, 19);  // Appends up to 19 characters to leave space for the null terminator

    return 0;
}

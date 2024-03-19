#include <stdio.h>

int main(){
    char last_name[20];
    printf("Enter your last name: ");
    scanf("%19s", last_name); // Limit input to 19 characters
    return 0;
}

#include <stdio.h>

/*This function attempts to extract a pair of numbers from a user-supplied string.*/
void parse_data(char *untrusted_input){
    int m = 0, n = 0, error; // Initialize m and n to 0
    error = sscanf(untrusted_input, "%d:%d", &m, &n);
    
    if (error != 2){ // Check if two values were parsed
        printf("Did not specify two integer values. Die evil hacker!\n");
        return; // Exit the function
    }
    
    printf("m is %d and n is %d", m, n);
}

int main(){
    parse_data("123:");
    return 0;
}

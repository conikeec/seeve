#include <stdio.h>

/*This function attempts to extract a pair of numbers from a user-supplied string.*/
void parse_data(char *untrusted_input){
    int m,n,error;
    error=sscanf(untrusted_input,"%d:%d",&m,&n);
    if (EOF == error){
        printf("Did not specify integer value. Die evil hacker!\n");
    }
    printf("m is %d and n is %d",m,n);
}

int main(){
    parse_data("123:");
    return 0;
}


/*
This code attempts to extract two integer values out of a formatted, user-supplied input. 
However, if an attacker were to provide an input of the form:
123:
then only the m variable will be initialized. 
Subsequent use of n may result in the use of an uninitialized variable (CWE-457). 
*/

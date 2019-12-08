#include<stdio.h> 
#include<string.h>
#include <unistd.h>
#define MAXLEN 1024

/*The following code reads from cfgfile and copies the input into inputbuf using strcpy(). 
The code mistakenly assumes that inputbuf will always contain a NULL terminator.*/
int main(){
    char *inputbuf;
    char *pathbuf[MAXLEN];
    /*for some file descriptor fd*/
    read(0,inputbuf,MAXLEN); //does not null terminate
    strcpy(pathbuf,inputbuf); //requires null terminated input
    return 0;
}

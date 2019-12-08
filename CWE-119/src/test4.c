#define MAX_SIZE 16
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/*This example applies an encoding procedure to an input string and stores it into a buffer.*/

int main(int argc, char *argv[]){
    int i, j=0;
    char a[MAX_SIZE];
    
    /*checks if the user provided an input*/
    if (argc<2) return 0;
    
    /*checks if the input provided by the user fits in the array a*/
    if (MAX_SIZE <= strlen(argv[1])){
       printf("user string too long");
       return 0;
    }
 
    /*performs the encoding*/
    for (i=0; i < strlen(argv[1]); i++){
        if( '&' == argv[1][i] ){
            a[j++] = '&';
            a[j++] = 'a';
            a[j++] = 'm';
            a[j++] = 'p';
            a[j++] = ';';
        }
        else a[j++]=argv[1][i]; 
     }
     printf("The encoded string is %s \n",a);
     return 0;
}

/*The programmer attempts to encode the ampersand character in the user-controlled string,
 however the length of the string is validated before the encoding procedure is applied. 
Furthermore, the programmer assumes encoding expansion will only expand a given character by a factor of 4,
while the encoding of the ampersand expands by 5. As a result, 
when the encoding procedure expands the string it is possible to overflow the destination buffer if the attacker provides a string of many ampersands.*/

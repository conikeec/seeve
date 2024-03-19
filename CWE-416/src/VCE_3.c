#include <stdio.h>
#include <stdlib.h>
void dangerous_func ( int* ptr , int a, int b) {
     int val = 0;
     if (! ptr) return;
     if(a) {
         *ptr+= 2;
     } else {
         val=*ptr ; /* uFP: Use of null pointer detected : ptr */
         free(ptr) ;
     }
     if(b) {
         val += 5;
     } else {
         val += *ptr ; /* TP: use after free detected : ptr */
     }
     if(a) free(ptr) ;
     printf ("val = %i\n", val) ;
     }

int main () {
     /* Unsafe function call */
     dangerous_func(malloc(sizeof ( int)),0,0) ;
     return 0;
}

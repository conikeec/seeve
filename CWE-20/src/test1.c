
/* This example asks the user for a height and width of an m X n game board with a maximum dimension of 100 squares.*/

#define MAX_DIM 100
#include <stdio.h>
#include <stdlib.h>

struct board_square_t {
   int height;
   int width;
};


int main(){
    /* board dimensions.*/
    int m,n, error;
    struct board_square_t *board;
    printf("Please specify the board height: \n");
    error = scanf("%d", &m);
    if ( EOF == error ){
        printf("No integer passed: Die evil hacker!\n");
    }
    printf("Please specify the board width: \n");
    error = scanf("%d", &n);
    if ( EOF == error ){
         printf("No integer passed: Die evil hacker!\n");
    }
    if ( m > MAX_DIM || n > MAX_DIM ) {
        printf("Value too large: Die evil hacker!\n");
    }
    board = (struct board_square_t*) malloc( m * n * sizeof(struct board_square_t));
    return 0;
}

/*While this code checks to make sure the user cannot specify large, positive integers and consume too much memory, 
  it does not check for negative values supplied by the user. As a result, an attacker can perform a resource consumption (CWE-400) 
  attack against this program by specifying two, large negative values that will not overflow, resulting in a very large memory allocation (CWE-789) 
  and possibly a system crash. Alternatively, an attacker can provide very large negative values which will cause an integer overflow (CWE-190) 
  and unexpected behavior will follow depending on how the values are treated in the remainder of the program. */

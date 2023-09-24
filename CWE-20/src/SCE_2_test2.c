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
        return 1; // Exit the program
    }
    if ( m <= 0 || m > MAX_DIM ) {
        printf("Invalid height value: Die evil hacker!\n");
        return 1; // Exit the program
    }
    
    printf("Please specify the board width: \n");
    error = scanf("%d", &n);
    if ( EOF == error ){
         printf("No integer passed: Die evil hacker!\n");
         return 1; // Exit the program
    }
    if ( n <= 0 || n > MAX_DIM ) {
        printf("Invalid width value: Die evil hacker!\n");
        return 1; // Exit the program
    }
    
    board = (struct board_square_t*) malloc( m * n * sizeof(struct board_square_t));
    if (board == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program
    }
    
    // ... rest of the code ...

    free(board); // Don't forget to free the allocated memory
    return 0;
}

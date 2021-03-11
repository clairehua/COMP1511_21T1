// Program prints a diagonal
// COMP1511 H13C

#include <stdio.h>

int main(void) {
    // prompt the user
    printf("Please enter an integer: ");
    // receive input from user
    int n;
    scanf("%d", &n);
        
    // print output
    int row = 0;
    
    // loop through the rows 
    while (row < n) {
        // reset the col to the beginning
        int col = 0;
     
        // loop through the column
        while (col < n) {
            // choose if it is an * or a -
            if (col == row) {
                printf("*");
            } else {
                printf("-");
            }
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }
    
    return 0;
}

